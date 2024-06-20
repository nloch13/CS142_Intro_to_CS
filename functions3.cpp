#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int x=1;
int y=2;


int pbv (int x, int y) {
	x=3;
	y=4;
	return x+y;
}

int pbr(int &x, int &y) {
	x=3;
	y=4;
	return x*y;
}

int variable1 = 10;
int variable2 = 20;

void swap(int &a, int &b) {
	int temp= a;
	a=b;
	b=temp;
}




int main() {
	/*
	//Pass by Value
	cout<<"Y before: "<<y<<endl;
	cout<<"X before: "<<x<<endl;
	cout<<pbv(x,y)<<endl;
	cout<<"Y after: "<<y<<endl;
	cout<<"X after: "<<x<<endl;
	
	//Pass by Reference
	cout<<"Y before: "<<y<<endl;
	cout<<"X before: "<<x<<endl;
	cout<<pbr(x,y)<<endl;
	cout<<"Y after: "<<y<<endl;
	cout<<"X after: "<<x<<endl;
	cout<<"-----------------------------"<<endl;
	//Swap
	cout<<"Variable1 before: "<<variable1<<endl;
	cout<<"Variable2 before: "<<variable2<<endl;
	swap(variable1,variable2);
	cout<<"Variable1 after: "<<variable1<<endl;
	cout<<"Variable2 after: "<<variable2<<endl;
	*/
	
	int number=rand();
	cout<<"Number: "<<number<<endl;
	cout<<"Max Number: "<<RAND_MAX<<endl;
	
	for(int i=1; i<=5;i++) {
		int randNum=rand();
		cout<<"Random Number: "<<randNum<<endl;
	}
	
	srand(time(NULL));
	for(int i=1; i<=5;i++) {
		int randNum=rand();
		cout<<"Seed Number: "<<randNum<<endl;
	}
	
	for(int i=1; i<=5;i++) {
		int randNum=1+rand()%10;
		cout<<"1-10 Number: "<<randNum<<endl;
	}
	return 0;
}