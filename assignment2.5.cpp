#include <iostream>

using namespace std;

int main () {
	
	//-------------------------------------------------------------
	// Assignment 2: Decisions, Decisions
	// Developer: Nate Loch 
	// Date: 9/7/21
	//-------------------------------------------------------------
	
	cout<<"------------------"<<endl;
	cout<<"** Welcome to Queen's Isle MegaCoaster! **"<<endl;
	cout<<"The riders of the MegaCoaster must be a certain height to maintain their safety during the ride."<<endl;
	cout<<"please enter your height in inches: "<<endl;
	int riderIN;
	cin>> riderIN; 
	if (riderIN<60) {
		cout<<"I'm sorry. You are not tall enough to ride this ride. You must be at least 5' tall. You can wait in the waiting area to the left while the rest of your party enjoys the ride."<<endl;
	}
	if (riderIN>60) {
		cout<<"Congratulations! You are tall enough to ride the MegaCoaster! Enjoy your ride!"<<endl;
	}
	cout<<"------------------"<<endl;
	
	
	
	return 0;
}