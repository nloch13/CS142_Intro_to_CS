#include <iostream>

using namespace std;

int main () {
	
	
	// > < >= <= == != 
	
	
	//if(sisterAge>=25) {
	//	relativeCount++;
	
	
	//if(!smoker)
		
	
	
	
	int minNum = 10;
	int maxNum = 100;
	cout<<"Pick a number between "<< minNum << " and " << maxNum <<": "<<endl;
	int myNum;
	cin>>myNum;
	
	if(myNum>minNum) {
		cout<<myNum<<" is grater than "<< minNum <<endl;
		int diffNum = myNum-minNum;
		cout<<myNum<<" is "<< diffNum <<" greater than "<< minNum<<endl;
	}
	
	if(myNum<maxNum) {
		cout<<myNum<<" is less than "<<maxNum <<endl;
		int diffNum = maxNum-myNum;
		cout<<myNum<<" is "<< diffNum <<" less than "<< maxNum<<endl;
	}

	if(myNum==minNum || myNum==maxNum) {
		cout<<"This number is a boundary number."<<endl;
	}
	
	cout<<"What is your age?"<<endl;
	int myAge;
	cin>>myAge;
	
	if(myAge>18) {
		cout<<"Congratulations, you can vote!"<<endl;
	} else if (myAge=18) {
		cout<<"Congratulations, you can finally vote!"<<endl;
	}
	else {
		cout<<"Sorry - you cannot vote."<<endl;
	}
	
	//Grade switch statement 
	cout<<"Enter the letter grade you expect to get in this course; ";
	char myGrade;
	cin>>myGrade;
	
	switch(myGrade) {
		case 'A':
			cout<<"You must score 90 or above."<<endl;
			break;
		case 'B':
			cout<<"You must score between 80 and 89"<<endl;
			break;
		case 'C':
			cout<<"You must score between 70 and 79"<<endl;
			break;
		case 'D':
			cout<<"You must score between 60 and 69"<<endl;
			break;
		case 'F':
			cout<<"Are you sure? y/n";
			char confirm;
			cin>>confirm;
			if(confirm== 'y' || confirm== 'Y') {
		cout<<"Sorry -- I guess you didn't study"<<endl;
		}	else if(confirm== 'n' || confirm == 'N') {
		cout<<"Good, study and you will do great! "<<endl;
		} else {
			cout<<"Wrong choice!"<<endl;
		}
		break;
	default:
		cout<<"Sorry, that isn't a possible letter grade."<<endl;
		break;
	}
	
	
	
	return 0;
	
}