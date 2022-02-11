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

int bf_win_setup(Atom &atom, Neighbor &neighbor, Comm &comm){
        /*MPI_Win_create_dynamic(MPI_INFO_NULL, nic_host_communicator, &win_neighbors);
        MPI_Win_create_dynamic(MPI_INFO_NULL, nic_host_communicator, &win_numneigh);

        MPI_Win_create_dynamic(MPI_INFO_NULL, nic_host_communicator, &win_type);
        MPI_Win_create_dynamic(MPI_INFO_NULL, nic_host_communicator, &win_sorted_index);
        MPI_Win_create_dynamic(MPI_INFO_NULL, nic_host_communicator, &win_f);*/
        
        /*MPI_Win_create(&atom.nlocal, sizeof(int), sizeof(int), MPI_INFO_NULL, nic_host_communicator, &win_nlocal);
        MPI_Win_create(&atom.nghost, sizeof(int), sizeof(int), MPI_INFO_NULL, nic_host_communicator, &win_nghost);
        MPI_Win_create(&neighbor.maxneighs, sizeof(int), sizeof(int), MPI_INFO_NULL, nic_host_communicator, &win_maxneighs);

        MPI_Win_create(&addresses, 3*sizeof(MPI_AINT), sizeof(MPI_AINT), MPI_INFO_NULL, nic_host_communicator, &win_addresses);
        
        MPI_Win_create(comm.sendnum, comm.nswap*sizeof(MPI_INT), sizeof(MPI_INT), MPI_INFO_NULL, nic_host_communicator, &win_sendnum);
        MPI_Win_create(comm.recvnum, comm.nswap*sizeof(MPI_INT), sizeof(MPI_INT), MPI_INFO_NULL, nic_host_communicator, &win_recvnum);
        MPI_Win_create(comm.firstrecv, comm.nswap*sizeof(MPI_INT), sizeof(MPI_INT), MPI_INFO_NULL, nic_host_communicator, &win_firstrecv);
        
        */
        
        return 0;
}
void comm_border_to_bf(Atom &atom, Neighbor &neighbor, Comm &comm, int n){
        
        if(isHost){
               

                MPI_Send(comm.sendnum, comm.nswap, MPI_INT, 1, 0, nic_host_communicator);
                MPI_Send(comm.recvnum, comm.nswap, MPI_INT, 1, 0, nic_host_communicator);
                MPI_Send(comm.firstrecv, comm.nswap, MPI_INT, 1, 0, nic_host_communicator);
                for(int iswap=0; iswap < comm.nswap; iswap++){
                        MPI_Send(comm.sendlist[iswap], comm.sendnum[iswap],MPI_INT, 1, 0, nic_host_communicator);
                }
                
                
        }
        else{
                
        
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

void comm_neigh_to_bf(Atom &atom, Neighbor &neighbor, Comm &comm, int n){
        
        
        int features[3]={atom.nlocal, atom.nghost, neighbor.maxneighs};
        
        if(isHost){
                MPI_Send(features, 3, MPI_INT, 1, 0, nic_host_communicator);
                

                
                MPI_Send(neighbor.numneigh, atom.nlocal, MPI_INT, 1, 0, nic_host_communicator);
                MPI_Send(neighbor.neighbors,neighbor.maxneighs*atom.nlocal, MPI_INT, 1, 0, nic_host_communicator);
                MPI_Send(atom.type,(atom.nlocal+atom.nghost), MPI_INT, 1, 0, nic_host_communicator);
                
                
        }
        else{
                MPI_Recv(features, 3, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                atom.nlocal = features[0];
                atom.nghost = features[1];
                neighbor.maxneighs= features[2];
                
                const int nall = atom.nlocal + atom.nghost;
                neighbor.growneigh(nall);
                
                
                int nmax = neighbor.getnmax();
        
                /*MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_numneigh);
                MPI_Get(neighbor.numneigh, atom.nlocal, MPI_INT, 0, addresses[0], atom.nlocal, MPI_INT, win_numneigh);
                MPI_Win_flush_local(0, win_numneigh);
                MPI_Win_unlock(0, win_numneigh);
        
                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_neighbors);
                MPI_Get(neighbor.neighbors,neighbor.maxneighs*atom.nlocal, MPI_INT, 0, addresses[1], neighbor.maxneighs*atom.nlocal, MPI_INT, win_neighbors);
                MPI_Win_flush_local(0, win_neighbors);
                MPI_Win_unlock(0, win_neighbors);*/
                while((atom.nlocal+atom.nghost) >= atom.nmax) atom.growarray();
                MPI_Recv(neighbor.numneigh, atom.nlocal, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                MPI_Recv(neighbor.neighbors,neighbor.maxneighs*atom.nlocal, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                MPI_Recv(atom.type,(atom.nlocal+atom.nghost), MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                
                /*MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_type);
                MPI_Get(atom.type,(atom.nlocal+atom.nghost), MPI_INT, 0, addresses[2], (atom.nlocal+atom.nghost), MPI_INT, win_type);
                MPI_Win_flush_local(0, win_type);
                MPI_Win_unlock(0, win_type);*/
                /*MPI_Recv(features, 3, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                atom.nlocal = features[0];
                atom.nghost = features[0];
                neighbor.maxneighs= features[1];*/
                
                //MPI_Recv(addresses, 3, MPI_AINT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
        
                //MPI_Recv(comm.sendnum, comm.nswap, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                //MPI_Recv(comm.recvnum, comm.nswap, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                //MPI_Recv(comm.firstrecv, comm.nswap, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                /*MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_sendnum);
                MPI_Get(comm.sendnum, comm.nswap, MPI_INT, 0, 0, comm.nswap, MPI_INT, win_sendnum);
                MPI_Win_flush_local(0, win_sendnum);
                MPI_Win_unlock(0, win_sendnum);
                
                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_recvnum);
                MPI_Get(comm.recvnum, comm.nswap, MPI_INT, 0, 0, comm.nswap, MPI_INT, win_recvnum);
                MPI_Win_flush_local(0, win_recvnum);
                MPI_Win_unlock(0, win_recvnum);
                
                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_firstrecv);
                MPI_Get(comm.firstrecv, comm.nswap, MPI_INT, 0, 0, comm.nswap, MPI_INT, win_firstrecv);
                MPI_Win_flush_local(0, win_firstrecv);
                MPI_Win_unlock(0, win_firstrecv);
                
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
                
                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_nlocal);
                MPI_Get(&atom.nlocal, 1, MPI_INT, 0, 0, 1, MPI_INT, win_nlocal);
                MPI_Win_flush_local(0, win_nlocal);
                MPI_Win_unlock(0, win_nlocal);

                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_nghost);
                MPI_Get(&atom.nghost, 1, MPI_INT, 0, 0, 1, MPI_INT, win_nghost);
                MPI_Win_flush_local(0, win_nghost);
                MPI_Win_unlock(0, win_nghost);

                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_maxneighs);
                MPI_Get(&neighbor.maxneighs,1, MPI_INT, 0, 0, 1, MPI_INT, win_maxneighs);
                MPI_Win_flush_local(0, win_maxneighs);
                MPI_Win_unlock(0, win_maxneighs);

                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_addresses);
                MPI_Get(&addresses, 3 , MPI_AINT, 0, 0, 3, MPI_AINT, win_addresses);
                MPI_Win_flush_local(0, win_addresses);
                MPI_Win_unlock(0, win_addresses);

                const int nall = atom.nlocal + atom.nghost;
                neighbor.growneigh(nall);

                while((atom.nlocal+atom.nghost) >= atom.nmax) atom.growarray();
                //MPI_Recv(atom.type,(atom.nlocal+atom.nghost), MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                
                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_type);
                MPI_Get(atom.type,(atom.nlocal+atom.nghost), MPI_INT, 0, addresses[2], (atom.nlocal+atom.nghost), MPI_INT, win_type);
                MPI_Win_flush_local(0, win_type);
                MPI_Win_unlock(0, win_type);
                
                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_numneigh);
                MPI_Get(neighbor.numneigh, atom.nlocal, MPI_INT, 0, addresses[0], atom.nlocal, MPI_INT, win_numneigh);
                MPI_Win_flush_local(0, win_numneigh);
                MPI_Win_unlock(0, win_numneigh);
        
                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_neighbors);
                MPI_Get(neighbor.neighbors,neighbor.maxneighs*atom.nlocal, MPI_INT, 0, addresses[1], neighbor.maxneighs*atom.nlocal, MPI_INT, win_neighbors);
                MPI_Win_flush_local(0, win_neighbors);
                MPI_Win_unlock(0, win_neighbors);*/
                

                

        }
        
}

/*void comm_atom_to_bf(Atom &atom, int n){
        
                   
        if(!isHost){
                MPI_Win_lock (MPI_LOCK_SHARED, 0, 0, win_x);
                MPI_Get(atom.x, (atom.nlocal+atom.nghost)*PAD, MPI_DOUBLE, 0, addresses[2], (atom.nlocal+atom.nghost)*PAD, MPI_DOUBLE, win_x);
                MPI_Win_flush_local(0, win_x);
                MPI_Win_unlock (0, win_x);
        }
}*/

void comm_force_to_host(Atom &atom){
        
                /*MPI_Recv(&addresses[3], 1, MPI_AINT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                
                MPI_Win_lock(MPI_LOCK_SHARED, 0, 0, win_f);
                MPI_Put(atom.f,atom.nlocal*PAD, MPI_DOUBLE, 0, addresses[3], atom.nlocal*PAD, MPI_DOUBLE, win_f);
                MPI_Win_flush_local(0, win_f);
                MPI_Win_unlock(0, win_f);  */   
}



