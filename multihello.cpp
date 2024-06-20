#include <iostream>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[]) {
	
	//Initialize MPI
	MPI_Init(&argc, &argv);
	
	int id;
	//Who we are 
	MPI_Comm_rank(MPI_COMM_WORLD, &id);
	
	cout<<"Hello I am "<<id<<"out of "<<np<<" total processors."<<endl;
	
	if(id%2==0) {
		cout<<"I am even and I am "<<id<<endl;
	} else {
		cout<<"I am odd and I am "<<id<<endl;
	}
	
	MPI_Finalize(); 
	
	
	
	return 0;
	
}