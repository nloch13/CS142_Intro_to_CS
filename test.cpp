#include <iostream>

using namespace std;


int main () {
	
	//This will output hello world
	char myGrade;
	char yourGrade = 'A';
	cout<<"hello world!"<<endl;
	cout<<"You have an "<<yourGrade<< " in this class. "<<endl;
	
	int num1 = 10;
	double num2 = 20;
	int addNums = num1 + num2;
	double divNums = num1/num2;
	double modNum= 7%3;
	cout<<"adding numbers:" <<addNums<<endl;
	cout<<"dividing numbers:"<<divNums<<endl;
	cout<<"remainder:" <<modNum<<endl;
	
	bool smoker = 0; 
	cout<<"You are a smoker:" <<smoker<<endl;
	cout<<boolalpha;
	cout<<"You are a smoker:" <<smoker<<endl;
	
	cout<<"what is 2 + 5?";
	int yourAnswer;
	cin>>yourAnswer;
	cout<<"You answered "<<yourAnswer<<endl;
	
	int numTotal;
	int num10, num11, num12;
	cout<<"Enter your three favorite numbers: ";
	cin>>num10>>num11>>num12;
	numTotal = num10+num11+num12;
	cout<<"Your favorite numbers, "<<num10<<", "<<num11<<", and "<<num12<<" total to "<<numTotal<<"."<<endl;
	
	
	
	
	
	
	
	
	return 0;
}