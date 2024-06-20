#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream myFile;
	myFile.open("myFile.txt");
	cout<<"List three numbers between 1 and 100 separated by spaces; "<<endl;
	int num1, num2, num3;
	cin>>num1>>num2>>num3;
	//myFile<<num1<<num2<<num3;
	myFile<<num1<<"\n"<<num2<<"\n"<<num3;
	myFile.close();
	
	ifstream readMyFile;
	readMyFile.open("myFile.txt");
	int num11, num22, num33;
	readMyFile>>num11>>num22>>num33;
	int addNums = num11+num22+num33;
	cout<<"Your three numbers of "<<num11<<" "<<num22<<" "<<num33<<" total "<<addNums<<endl;
	
	return 0;
	
}