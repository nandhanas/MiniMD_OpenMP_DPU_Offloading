## README

This fork of MiniMD is modified to run across a Bluefield-2 Arm device and an Intel server. To learn more about this work please refer to our paper: https://arxiv.org/abs/2204.05959

Here is the instructions on how to run the code on HPC Advisory Council Thor cluster.

##  Requirements

### Cluster Configuration

- The cluster should have equal number of host and Bluefield nodes.
- In the current implementation, the assignemnt of each Bluefield to the corresponding host is based on the naming convention. That means the code pairs the host `thor001` with Bluefield `thor-bf01`, which is based on their number `01` in their hostnames.
- In this implementation, for intranode parallelism, we can only use openMP.

### OpenMPI

- Download `hpcx` for x86_64 on host and for aarch64 and Bluefiled from https://developer.nvidia.com/networking/hpc-x. This fork of MiniMD is tested on HPC-X 2.9.0 - supports gcc 8.4.1 and OpenMPI 4. 
- Untar the downloaded file to the same location like `/tmp` for host and BlueField-2 separately and rename them to `hpcx-2.x.0` so that they have the same directory structure on host and BlueField-2.
- Add these lines to $HOME/.bashrc (on host and Bluefield):
  ```bash
  source /tmp/hpcx/hpcx-mt-init.sh
  hpcx_load
  ```

## Compilation

Downloading miniMD to the same path on all hosts and bluefield nodes.

```bash
git clone -b force-calc-on-BF-with-MPI-and-OpenMP https://github.com/skaramati/miniMD.git
```

From this point on, we will assume that the cloned repo is stored in `$miniMD_root`.

### Compiling miniMD

```bash
ssh thor-bfxx # xx is the numeric identifier of Bluefield node on Thor cluster
cd $miniMD_root/ref
# build miniMD on Bluefield
make openmpi AVX=no arch=aarch64
# build miniMD on Host
# xx in thor0xx is the numeric identifier of host
ssh thor0xx make openmpi arch=x86_64 -C $miniMD_root/ref
```

## Running the code
`mpirun` command should be launched from a Bluefield node. 
As an example, the following command will run MiniMD on default input file (e.g. in.lj.miniMD) on 8 hosts and 8 BlueFields with 2 OMP threads on host and 4 OMP threads on Bluefield:

```bash
ssh thor-bfxx # xx is the numeric identifier of Bluefield node on Thor cluster

np=8
nThrHost=2
nThrBF=4
mpirun -np $np  -hostfile <hostfile> -bind-to cpu-list -map-by node $miniMD_root/ref/miniMD_openmpi_x86_64 -t $nThrHost : -np $np -hostfile BFfile -bind-to cpu-list -map-by node $miniMD_root/ref/miniMD_openmpi_aarch64 -t $nThrBF
```

To reproduce the experiment results from [the paper](https://arxiv.org/abs/2204.05959), you can change the number of MPI processes (`np`) and OMP threads on host (`nThrHost`) and Bluefield (`nThrBF`).
