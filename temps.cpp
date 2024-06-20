#include <iostream>
#include <fstream

using namespace std;

void loadArry(int A[], int &length) {
		ifstream f;
		f.open("temps.txt");
		//Put lenght value from file into lenght variables 
		f>>length;
		//build our array with a for loop
		for(int i=0;i<length; i++) {
			f>>A[i];
		}
		f.close();
}

void printArray(int B[], int lenght) {
	//Print values of the array 
	for(int i=0; i<length; i++) {
		cout<<B[i]<<" ";
	}
	cout<<endl;
}

int lowestTemp(int C[], int lenght) {
	//Find the lowest temp; return value
	int minTemp = C[0]
	
	for(int i=1; i<length;i++) {
		if(C[i]<minTemp){
			minTemp=C[i];
		}
	}
return minTemp
}

int min() {
	
	int length;
	int temp[1000];
	
	loadArray(temp, length);
	printArray(temp, length);
	cout<<"The lowest temperature is "<<lowestTemp<<endl;
	
	return 0;
}
		
			