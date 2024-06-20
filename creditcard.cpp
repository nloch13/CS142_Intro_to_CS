#include <iostream>

using namespace std;


double balance, rate, interestEarned;
int months;
char runAgain;

double interest(double initBalance, double rate, int months){
		double balance = initBalance;
		int i = 0;
		while (i<months) {
			balance = balance *(1+rate);
			i++;
		}
		return balance-initBalance;
	
}

int main() {
	
	do{
		cout<<"******Credit Card Interest Calculator*********"<<endl;
		cout<<"Please endter your initial balance, interest rate (as decimal), and months the bill has run separated by a space: "<<endl;
		cin>>balance>>rate>>months;
		interestEarned = interest(balance, rate, months);
		cout<<"You have accumulated $"<<interestEarned<<" in interest payments."<<endl;
		cout<<"Would you like another calculation? If so, enter 'Y'. All other entries quit.";
		cin>>runAgain;
	
	}while(runAgain=='Y');
	
	
	
	return 0;
	
}