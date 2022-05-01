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
        
                
                while((atom.nlocal+atom.nghost) >= atom.nmax) atom.growarray();
                MPI_Recv(neighbor.numneigh, atom.nlocal, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                MPI_Recv(neighbor.neighbors,neighbor.maxneighs*atom.nlocal, MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
                MPI_Recv(atom.type,(atom.nlocal+atom.nghost), MPI_INT, 0, 0, nic_host_communicator, MPI_STATUS_IGNORE);
        
        }
        
}



