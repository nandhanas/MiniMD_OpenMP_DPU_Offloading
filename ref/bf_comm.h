#include <mpi.h>

extern char name[MPI_MAX_PROCESSOR_NAME];
extern MPI_Comm hosts_communicator;
extern MPI_Comm nic_host_communicator;
extern int isHost;
extern MPI_Request *s_req;

#define BF


