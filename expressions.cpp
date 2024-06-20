#include <iostream>

using namespace std;

int main () {
	
	//Currency converter
	//Converting dollars to euros 
	
	double dollar2euro = 0.83;
	cout<<"Welcome to my currency converter!"<<endl;
	cout<<"Enter the value in dollar amount: $";
	double dollar;
	cin>>dollar;
	double euros =dollar * dollar2euro;
	cout<<"$"<<dollar<<" is equivalent to " <<euros<< " euros."<<endl;
	
	
	
	//Chnage Calculator 
	//Ask user to enter $ amount and figure out the least type of coins 
	
	cout<<"Welcome to the CHANGE CALCULATOR!!!!"<<endl;
	cout<<"enter in the amount of money you have in coins: "<<endl;
	int change; 
	cin>>change;
	int balance, dollars , quarters, dimes, nickels, pennies;
	balance=dollars=quarters=dimes=nickels=pennies=0;
	const int DOLLARVAL=100;
	const int QUARTERVAL=25;
	const int DIMEVAL=10;
	const int NICKELVAL=5;
	const int PENNYVAL=1;
	
	dollars = change/DOLLARVAL;
	balance = change%DOLLARVAL;
	
	quarters = balance/QUARTERVAL;
	balance = balance%QUARTERVAL;
	
	dimes = balance/DIMEVAL;
	balance%=DIMEVAL;   // Same as balance = balance%DIMEVAL
	
	nickels = balance/NICKELVAL;
	balance%=NICKELVAL;
	
	pennies = balance;
	
	cout<<"Your change is:"<<endl;
	cout<<"Dollars:"<<dollars<<endl;
	cout<<"Quarters:"<<quarters<<endl;
	cout<<"Dimes:"<<dimes<<endl;
	cout<<"Nickels:"<<nickels<<endl;
	cout<<"Pennies:"<<pennies<<endl;
	






	return 0;
}