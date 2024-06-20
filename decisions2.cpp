#include <iostream>

using namespace std;

int main () {
	
	cout<<"Do you like warm weather? y/n "<<endl;
	char Weather;
	cin>>Weather;
	
	if(Weather== 'y' || Weather== 'Y') {
		cout<<"Great -- You will love today"<<endl;
	}
	
	if(Weather== 'n' || Weather== 'N') {
		cout<<"You might want to spend today indoors"<<endl;
	}
	
	
	return 0;
	
}