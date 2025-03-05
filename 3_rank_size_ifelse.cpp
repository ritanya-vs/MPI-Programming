#include <iostream>
#include<mpi.h>
using namespace std;

int main(int argc,char** argv){
        int rank,size;
        MPI_Init(&argc,&argv);
        MPI_Comm_size(MPI_COMM_WORLD,&size);
        MPI_Comm_rank(MPI_COMM_WORLD,&rank);
        if(rank == 0)
                cout<<"I am the master. Total process: "<<size<<endl;
        else
                cout<<"I am worker. ID : "<<rank<<endl;
        MPI_Finalize();
}
