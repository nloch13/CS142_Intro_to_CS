#include <iostream>

using namespace std;

double num1;
double num2;
char play;
void mathCalc();

void playAgain() {
	do {
		cout<<"Do you want to play again? y/n"<<endl;
		cin>>play;
		
		if (play == 'y') {
			mathCalc();
		}else if (play == 'n') {
			cout<<"Thank you for playing"<<endl;
		}else {
			cout<<"that is not a vaild responce"<<endl;
		}
	}while(play!='n');
}



void mathCalc() {
	cout<<"Pick 2 numbers separated by a space: ";
	cin>>num1>>num2;
	cout<<"Your numbers are "<<num1<<" and "<<num2<<endl;
	cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
	cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
	cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
	cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
	playAgain();
}


int main () {
	
	mathCalc() ;
	
	return 0;
}