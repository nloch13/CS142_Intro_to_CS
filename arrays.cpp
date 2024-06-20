#include <iostream>

using namespace std;

/*Arrays: hold many values
all values must be same data type 
add square brackets with the number of values 
*/

int main() {

int temps[5]={67,78,82,65,74};

//Print out one temp
cout<<"The first number is "<<temps[0]<<endl;

//Print out all temp values
for(int i=0; i<5; i++) {

	cout<<temps[i]<<endl;
}
//Loop through an empty array
int e[10]={};
	
for(int i=0; i<10; i++) {
	cout<<e[i]<<endl;
}
	
//Copy array A to array B
int A[5]={3,4,7,8,9};
int B[5];

for(int i=0; i<5; i++) {
		B[i]=A[i];
		cout<<" B value is: "<<B[i]<<"    A value is: "<<A[i]<<endl;
	
	
	
	return 0;
	
	
}


