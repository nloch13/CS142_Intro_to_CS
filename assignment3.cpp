#include <iostream>

using namespace std;


//-------------------------------------------------------------
// Assignment 3: Loops
// Developer: Nate Loch 
// Date: 9/22/21
//-------------------------------------------------------------



int main () {
	
	
	//Program 1: Movie Night Cost
	
		
	cout<<"----------"<<endl;
	cout<<"** Welcome to Movies R Us! **"<<endl;
	
	bool done=false;
	int t;
	
	
	while(!done) {
	
		cout<<"Your age determines the price of your ticket."<<endl;
		cout<<"Please enter your age: "<<endl;
		cin>>t;
	
		if (t<3) {
		cout<<"Congratulations! Your ticket is free! Thank you!"<<endl;
		done=true;
		}
		else if (t>13) {
		cout<<"The cost to enjoy a movie here at Movies R Us is $12. Thank you!"<<endl;
		}
		else if (t>=3 & t<=13) {
		cout<<"The cost to enjoy a movie here at Movies R Us is $8. Thank you!"<<endl;
		}
	}
	cout<<"-----------"<<endl;
	

	//Program 2: Tuition Cost 
	
	
	cout<<"----------"<<endl;
	cout<<"** Tuition Cost Calculator! **"<<endl;
	
	bool end=false;
	int h;
	
	while(!end) {
	
	cout<<"How many credit hours do you want to take: (enter 0 to exit)"<<endl;
	cin>> h;
	if(h>=12 & h<=20) {
		cout<<"Your tuition bill will be $21205.00"<<endl;
	}
	if(h>=1 & h<=11) {
		cout<<"Your tuition bill will be: $"<<(h * 1760)<<endl;
	}
	if(h>=21) {
		cout<<"Your tuition bill will be: $"<<((h-20)*1760 + 21205)<<endl;
	}
	if(h==0) {
		cout<<"Will that be cash or check?"<<endl;
	end=true;
	}
	
	}
	cout<<"----------"<<endl;
	
	
	//Extra Credit 
	
	cout<<"----------"<<endl;
	cout<<"** Welcome back to Movies R Us! **"<<endl;
	
	int a;
	int c;
	int tp;
	tp=0;
	
	cout<<"How many people are in your party?"<<endl;
	cin>>a;
	
	do {
		cout<<"Your age determines the price of your ticket."<<endl;
		cout<<"Please enter your age: "<<endl;
		cin>>c;
	
		if (c>13) {
		cout<<"The cost to enjoy a movie here at Movies R Us is $12."<<endl;
			tp=tp+12;
		}
		else if (c>=3 & c<=13) {
			tp=tp+8;
		cout<<"The cost to enjoy a movie here at Movies R Us is $8."<<endl;
		}
		else if (c<3) {
		cout<<"Congratulations! Your ticket is free!"<<endl;
		} a--;
	}while(a!=0);
	
	cout<<"Your total cost is: $ "<<tp<<endl;
	cout<<"-----------"<<endl;
	
	

	return 0;

}