#include <iostream>
#include <fstream>

using namespace std;

/*-------------------------------------------------------------
* Assignment 5: Candy Database
* Developer:  Nate Loch
* Date: 10/28/21
*-------------------------------------------------------------*/

int inventory;
int eatCandy;
int TrickOrTreat;
char saveData;
char menuOption;
int CandyCorn;
int Reeses;
int MM;
int Other;
int totalCandy;
int candyNum;

void candyMenu() {  //lists the candy types and corisponding numbers
	cout<<"Candy Types"<<endl;
	cout<<"1.Candy Corn"<<endl;
	cout<<"2.Reeses Cups"<<endl;
	cout<<"3.M&Ms"<<endl;
	cout<<"4.Other"<<endl;
}

void candyBag() {  //will tell the user how many of each candy they have 
	cout<<"You have: "<<endl;
	cout<<CandyCorn<<" Candy Corns"<<endl;
	cout<<Reeses<<" Reeses Cups"<<endl;
	cout<<MM<<" M&Ms"<<endl;
	cout<<Other<<" Other candies"<<endl;
	totalCandy = (CandyCorn+Reeses+MM+Other);
	cout<<totalCandy<<" candies total"<<endl;
}

void printMenu() {  // prints the option menu 
	cout<<"Candy Menu: "<<endl;
	cout<<"E - Eat a candy"<<endl;
	cout<<"T - Trick or Treat"<<endl;
	cout<<"I - Inventory"<<endl;
	cout<<"C - Candy Types"<<endl;
	cout<<"M - Command Menu"<<endl;
	cout<<"S - Save this file to candy.txt"<<endl;
	cout<<"L - Load file from candy.txt"<<endl;
	cout<<"Q - Quit program"<<endl;
	
}

int ToTFunction(int TrickOrTreat, int &totalCandy, int &CandyCorn, int &Reeses, int &MM, int &Other) {	
		cout<<"Please enter candy type (1-4)"<<endl;
		cin>>candyNum;
			if(candyNum == 1) {
				(CandyCorn += 1);		// allows the user to add more candy by "trick or treating"
			}
			else if(candyNum == 2) {
				(Reeses += 1);
			}
			else if(candyNum == 3) {
				(MM += 1);
			}
			else if(candyNum == 4) {
				(Other += 1);
			}
			else {
				cout<<"Not a valid number"<<endl;
			}
	totalCandy = (CandyCorn+Reeses+MM+Other);
	return totalCandy;
}

int eatFunction(int eatCandy, int &totalCandy, int &CandyCorn, int &Reeses, int &MM, int &Other) {	
	cout<<"Please enter candy type (1-4)"<<endl;
	cin>>eatCandy;
	
	if(eatCandy == 1 && CandyCorn>= 1) {		// allows the user to take away candy by "eating" it
		(CandyCorn -= 1);
	}else if (eatCandy == 2 && Reeses>= 1) {
		(Reeses -= 1);
	}else if (eatCandy == 3 && MM>=1) {
		(MM -= 1);
	}else if (eatCandy == 4 && Other>=1) {
		(Other -= 1);
	}else {
		cout<<"You don't have enough candy"<<endl;
	}
	totalCandy = (CandyCorn+Reeses+MM+Other);
	return totalCandy;
}

int main() {
	cout<<"----------------"<<endl;

    cout<<"** Nate's Candy Database **"<<endl;
	
	printMenu();
	totalCandy=0;
	do {
		cout<<"Enter your menu selection: ";
		cin>>menuOption;
	
		if(menuOption=='C') {     //main function, calls the functions for each of the menu options 
			candyMenu();
		}else if (menuOption=='I') {
			candyBag();
		}else if(menuOption=='E') {
			eatFunction(eatCandy, totalCandy, CandyCorn, Reeses, MM, Other);
		}else if (menuOption=='T') {
			ToTFunction(TrickOrTreat, totalCandy, CandyCorn, Reeses, MM, Other);
		}else if (menuOption=='M') {
			printMenu();
		}else if(menuOption=='Q') {
			cout<<"Don't eat too much all at once"<<endl;
		}else {
			cout<<"Sorry, not an option"<<endl;
			printMenu();
			}
	}while(menuOption!='Q');
	cout<<"----------------"<<endl;
	return 0;
}