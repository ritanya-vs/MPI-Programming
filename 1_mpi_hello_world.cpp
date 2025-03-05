#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);
    printf("Hello from an MPI process!\n");
    MPI_Finalize();
    return 0;
}
