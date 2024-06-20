#include <iostream>
#include <fstream>

using namespace std;

int bankAcctNum;
double balance;
double depSum;
double withSum;
char saveData;
char menuOption;

void printMenu() {
	cout<<"Bank Menu: "<<endl;
	cout<<"D - Deposit funds"<<endl;
	cout<<"W - Withdrawl funds"<<endl;
	cout<<"B - View balance"<<endl;
	cout<<"M - Show bank menu"<<endl;
	cout<<"Q - Quit program"<<endl;
	
}

double deposit(double depSum, double &balance) {	//pass by referance
	balance+=depSum;
	
	return balance;
}

double withdrawl(double withSum, double &balance) {	//pass by referance
	if(balance<withSum) {
		cout<<"Insuffecent funds"<<endl;
	}
	else {
	balance-=withSum;
	}
	
	return balance;
}
	
int main() {
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"Please enter your 9-digit account number; ";
	cin>>bankAcctNum;
	cout<<"Please enter your inital deposit: ";
	cin>>balance;
	printMenu();
	
	do {
		cout<<"Enter your menu selection: ";
		cin>>menuOption;
	
		if(menuOption=='D') {
			cout<<"Enter deposit amount: ";
			cin>>depSum;
			deposit(depSum,balance);
		}
		else if (menuOption=='W') {
			cout<<"Enter deposit amount: ";
			cin>>withSum;
			withdrawl(withSum,balance);
		}
		else if (menuOption=='B') {
			cout<<"Account balance: $"<<balance<<endl;
		}
		else if (menuOption=='M') {
			printMenu();
		}
		else if(menuOption=='Q') {
			cout<<"Thank you for letting us take your money"<<endl;
		}
		else {
			cout<<"Sorry, not an option"<<endl;
			printMenu();
		}
		
	}while(menuOption!='Q');
	
	cout<<"Would you like to save your account information? (Y or N)"<<endl;
	cin>>saveData;
	if(saveData=='Y') {
		//Start to write to file
		ofstream saveAcct;
		saveAcct.open("bankAcct.txt");
		saveAcct<<bankAcctNum<<endl;   //Adds account number to first line 
		saveAcct<<balance<<endl;       //Saves balance to file
		cout<<"Your account information has been saved"<<endl;
		saveAcct.close();
	}
	else {
		cout<<"Thank you for banking with us today"<<endl;
	}
	
	
			
	
	
	
	
	
	return 0;
}