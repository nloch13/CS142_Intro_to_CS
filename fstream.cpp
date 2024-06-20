#include <iostream>
#include <fstream>

using namespace std;

/*Writing to a file 
1.Creating a variable: ofstream f;
2.Open/Connect to a file: f.open("text.txt");
3.Write to a file: f<<"Hello world!"<<endl;
4.Close the file: f.close();

Reading to a file 
1. Create a variabe: ifstream g;
2.*/


int main() {
	ofstream f;
	f.open("text.txt");
	f<<"Hello world"<<endl;
	f.close();
	
	ifstream g;
	g.open("text.txt");
	char c1, c2;
	g>>c1>>c2;
	cout<<"The file reads this: "<<c1<<c2<<endl;
	g.close();
	
	ofstream h;
	h.open("text.txt", ios::app);
	h<<"This is a new text."<<endl;
	h.close();
	
	return 0;
}