/*-------------------------------------------------------------
* Assignment 8: Pi Program
* Developer: Nate Loch
* Date: 12/7/21
*------------------------------------------------------------*/

#include <iostream>
#include <cmath>
#include "mpi.h"
using namespace std;

double chunk(int b, int id) {
	int start= id*b+1;         //Tells the prosserors what to start and stop with 
	int stop=(id+1)*b;          
	cout<<"Start= "<<start<<" Stop= "<<stop<<" and I am "<<id<<endl;
	
	double sum=0;
	
	for(int i=start; i<=stop; i++){
		sum=sum+ pow(-1.0,i+1)/(2*i-1);  //adds all the computations together 
	}
	return sum;
}

int main (int argc, char *argv[]) {
	
	
	MPI_Init(&argc, &argv);
	int id;
	MPI_Comm_rank(MPI_COMM_WORLD, &id);
	int np;
	MPI_Comm_size(MPI_COMM_WORLD, &np);
	int n;
	
	
	if(id==0){
		cout<<"Enter an n: ";
		cin>>n;
	}
	
	
	MPI_Bcast(&n,1,MPI_INT,0,MPI_COMM_WORLD);
	int b=n/np;
	double sum=0;
	sum=chunk(b, id);
	
	double total;
	MPI_Reduce(&sum, &total, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	
	if(id==0){
		double pi=total*4;
		cout<<"Pi= "<<pi<<endl;
	}

	MPI_Finalize();
	return 0;
}