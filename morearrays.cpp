#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	//Get data from scores.txt
	ifstream inStream;
	inStream.open("scores.txt");
	// Get lenght of array 
	int lenght;
	inStream>>lenght; //Hold first value/lenght of array
	int scoreArray[length];
	//Populate array with score values
	for(int i=0; i<length; i++) {
		inStream>>scoreArray[i];
	}
	
	intStream.close();
	//set smallest and largest variables to first scoreArray value 
	int smallest = scoreArray[0];
	int largest = scoreArray[0];
	
	
	//check all values against smallest and largest variables
	for(int i=1;i<lenght;i++) {
		if(scoreArray[i]<smallest) {
			smallest=scoreArray[i]
		}
		if(scoreArray[i]>largest) {
			largest=scoreArray[i];
		}
	}
	
	double scoreTotal=0
	double scoreAvg;
	//Add all the scores together
	for(int i=0; i<lenght; i++) {
		scoreTotal+=scoreArray[i];
	}
	scoreAvg= scoreTotal/lenght;
	
	
	return 0;
	
}