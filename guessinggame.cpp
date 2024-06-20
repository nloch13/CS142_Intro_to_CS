#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*-------------------------------------------------------------
* Assignment 4: Guessing Game
* Developer: Nate Loch 
* Date: 10/4/2021
*-------------------------------------------------------------*/

void guessinggame () { //selects random number 1-100 and tells the user if their guess is higher or lower then the random number, then procides to repeat till the correct number is guessed
	
	bool end=false;
	int guessNum;
	int randNum;
	srand ( time(NULL) ); 
	randNum=rand() % 100 + 1; 
	
	while (!end) { 
	cout<<"Please guess a number between 1-100: "<<endl;
	cin>> guessNum; 
	if (guessNum >  randNum) {
		cout<<"Your guess is too high! Guess again."<<endl;
	}
	if (guessNum < randNum) {
		cout<<"Your guess is too low! Guess again."<<endl;
	}
	if (guessNum == randNum) {
		cout<<"You guessed it! Way to go!"<<endl;
		end=true;
	}
	}
	
	
}
void again () {    //Asks the player if they want to play again
	
	char playagain;
	bool end=false;
	
	while (!end) {
	cout<<"Do you want to play again? y/n"<<endl;
	cin>> playagain;
	if (playagain == 'y') {
		guessinggame();
	}
	if  (playagain == 'n') {
		cout<<"Thank you for playing"<<endl;
		end=true;
	}
	
	}
}
int main () { 
	
	cout<<"----------"<<endl;
	cout<<"** Number Guessing Game **"<<endl;
	guessinggame();
	again();
	cout<<"----------"<<endl;	
	return 0;
	
}