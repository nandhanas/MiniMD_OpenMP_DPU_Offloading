#include "bf_comm.h"
#include "atom.h"
#include "neighbor.h"
#include "comm.h"
#include <cstdio>
#include <algorithm>
#include <unistd.h>
char name[MPI_MAX_PROCESSOR_NAME];
MPI_Comm hosts_communicator;
MPI_Comm nic_host_communicator;
int isHost;
int x_is_ready;
MPI_Aint addresses[4];

//Bf shared windows
MPI_Win win_numneigh;
MPI_Win win_neighbors;
MPI_Win win_x;
MPI_Win win_type;
MPI_Win win_f;
MPI_Win win_sorted_index;


void bf_Comm_Init()
{
        int len;
        MPI_Get_processor_name(name, &len);
        
        int color, key, hcolor;

        if(name[4]=='-'){
                
                isHost = 0;
                color = (name[7]-'0')*10+(name[8]-'0');
                key = 1;
        }
        else{
                isHost = 1;
                color = (name[5]-'0')*10+(name[6]-'0');
                key= 0;
        }
        
        MPI_Comm_split(MPI_COMM_WORLD, color, key, &nic_host_communicator);
        MPI_Comm_split(MPI_COMM_WORLD, isHost, color, &hosts_communicator);
        
}

int bf_win_setup(){
        MPI_Win_create_dynamic(MPI_INFO_NULL, nic_host_communicator, &win_neighbors);
        MPI_Win_create_dynamic(MPI_INFO_NULL, nic_host_communicator, &win_numneigh);

        MPI_Win_create_dynamic(MPI_INFO_NULL, nic_host_communicator, &win_x);
        MPI_Win_create_dynamic(MPI_INFO_NULL, nic_host_communicator, &win_f);
        MPI_Win_create_dynamic(MPI_INFO_NULL, nic_host_communicator, &win_type);
        MPI_Win_create_dynamic(MPI_INFO_NULL, nic_host_communicator, &win_sorted_index);

        //MPI_Win_create(&x_is_ready, sizeof(int), sizeof(int), MPI_INFO_NULL, nic_host_communicator, &win_x_ready);
        //MPI_Win_create(atom_addresses, 2*sizeof(MPI_Aint), sizeof(MPI_Aint), MPI_INFO_NULL, nic_host_communicator, &win_atom_addresses);
        return 0;
}


void comm_neigh_to_bf(Atom &atom, Neighbor &neighbor, Comm &comm, int n){
        
        
        int features[3]={atom.nlocal, atom.nghost,neighbor.maxneighs};
        
        if(isHost){
                
                MPI_Send(features, 3, MPI_INT, 1, 0, nic_host_communicator);
                
                MPI_Get_address(neighbor.numneigh, &addresses[0]);
                MPI_Get_address(neighbor.neighbors, &addresses[1]);
                MPI_Get_address(atom.x, &addresses[2]); 
                MPI_Get_address(atom.type, &addresses[3]);
                MPI_Send(addresses, 4, MPI_AINT, 1, 0, nic_host_communicator);

                MPI_Send(comm.sendnum, comm.nswap, MPI_INT, 1, 0, nic_host_communicator);
                MPI_Send(comm.recvnum, comm.nswap, MPI_INT, 1, 0, nic_host_communicator);
                MPI_Send(comm.firstrecv, comm.nswap, MPI_INT, 1, 0, nic_host_communicator);
                for(int iswap=0; iswap < comm.nswap; iswap++){
                        MPI_Send(comm.sendlist[iswap], comm.sendnum[iswap],MPI_INT, 1, 0, nic_host_communicator);
                }
                /*recvnum[iswap], 
                sendnum[iswap]
                firstrecv[iswap]
                reverse_send_size[iswap]
                reverse_recv_size[iswap]
                
                sendlist[iswap]*/
                
                //MPI_Get_address(type, &atom_addresses[1]);
                //MPI_Send(atom_addresses, 1, MPI_AINT, 1, 0, nic_host_communicator);

        }
        else{
                MPI_Recv(features, 3, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                atom.nlocal = features[0];
                atom.nghost = features[1];
                neighbor.maxneighs= features[2];
                
                const int nall = atom.nlocal + atom.nghost;
                neighbor.growneigh(nall);
                MPI_Recv(addresses, 4, MPI_AINT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
        
                int nmax = neighbor.getnmax();
        
                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_numneigh);
                MPI_Get(neighbor.numneigh, nmax, MPI_INT, 0, addresses[0], nmax, MPI_INT, win_numneigh);
                MPI_Win_flush_local(0, win_numneigh);
                MPI_Win_unlock(0, win_numneigh);
        
                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_neighbors);
                MPI_Get(neighbor.neighbors,neighbor.maxneighs*nmax, MPI_INT, 0, addresses[1], neighbor.maxneighs*nmax, MPI_INT, win_neighbors);
                MPI_Win_flush_local(0, win_neighbors);
                MPI_Win_unlock(0, win_neighbors);
                while((atom.nlocal+atom.nghost) >= atom.nmax) atom.growarray();

                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_type);
                MPI_Get(atom.type,(atom.nlocal+atom.nghost), MPI_INT, 0, addresses[3], (atom.nlocal+atom.nghost), MPI_INT, win_type);
                MPI_Win_flush_local(0, win_type);
                MPI_Win_unlock(0, win_type);

                MPI_Recv(comm.sendnum, comm.nswap, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                MPI_Recv(comm.recvnum, comm.nswap, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                MPI_Recv(comm.firstrecv, comm.nswap, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                for(int iswap=0; iswap < comm.nswap; iswap++){
                        comm.reverse_send_size[iswap] = comm.recvnum[iswap] * atom.reverse_size;
                        comm.reverse_recv_size[iswap] = comm.sendnum[iswap] * atom.reverse_size;
                        comm.comm_send_size[iswap] = comm.sendnum[iswap] * atom.comm_size;
                        comm.comm_recv_size[iswap] = comm.recvnum[iswap] * atom.comm_size;
                }
                for(int iswap=0; iswap < comm.nswap; iswap++){
                        if(comm.sendnum[iswap] > comm.maxsendlist[iswap]) comm.growlist(iswap, comm.sendnum[iswap]);
                        MPI_Recv(comm.sendlist[iswap], comm.sendnum[iswap],MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                        if(comm.sendnum[iswap] * 4 > comm.maxsend) comm.growsend(comm.sendnum[iswap] * 4);
                        if(comm.recvnum[iswap] * atom.border_size > comm.maxrecv) comm.growrecv(comm.recvnum[iswap] * atom.border_size);
                }

        }
        
}

void comm_atom_to_bf(Atom &atom, int n){
        
        int features[2]={atom.nlocal, atom.nghost};               
        if(isHost){
                //MPI_Send(features, 2, MPI_INT, 1, 0, nic_host_communicator);
                
                //MPI_Get_address(atom.x, &atom_addresses[0]);
                //MPI_Get_address(atom.type, &atom_addresses[1]);
                //MPI_Send(atom_addresses, 2, MPI_AINT, 1, 0, nic_host_communicator);
                  
                

        }
        else{
                
                //MPI_Recv(features, 2, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                //atom.nlocal = features[0];
                //atom.nghost = features[1]; 
                
                //MPI_Recv(atom_addresses, 1, MPI_AINT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                //MPI_Recv(&x_is_ready, 1, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                MPI_Barrier(nic_host_communicator);
                MPI_Win_lock (MPI_LOCK_SHARED, 0, 0, win_x);
                MPI_Get(atom.x, (atom.nlocal+atom.nghost)*PAD, MPI_DOUBLE, 0, addresses[2], (atom.nlocal+atom.nghost)*PAD, MPI_DOUBLE, win_x);
                //MPI_Win_fence(0, win_x);
                MPI_Win_flush_local(0, win_x);
                MPI_Win_unlock (0, win_x);
                        
                MPI_Barrier(nic_host_communicator);
                 
                /*MPI_Win_lock (MPI_LOCK_SHARED, 0, 0, win_type);
                MPI_Get(atom.type, (atom.nlocal+atom.nghost), MPI_INT, 0, atom_addresses[1], (atom.nlocal+atom.nghost), MPI_INT, win_type);
                MPI_Win_flush_local(0, win_type);
                MPI_Win_unlock (0, win_type);*/
        }
}

void comm_force_to_host(Atom &atom){
        
                MPI_Aint f_address;
                MPI_Recv(&f_address, 1, MPI_AINT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                

                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_f);
                MPI_Put(atom.f,atom.nlocal*PAD, MPI_DOUBLE, 0, f_address, atom.nlocal*PAD, MPI_DOUBLE, win_f);
                //MPI_Accumulate(, int origin_count, MPI_Datatype origin_dtype, int target_rank, MPI_Aint target_disp, int target_count, MPI_Datatype target_dtype, MPI_Op op, MPI_Win win)
                MPI_Win_flush_local(0, win_f);
                MPI_Win_unlock(0, win_f);
        
        
}