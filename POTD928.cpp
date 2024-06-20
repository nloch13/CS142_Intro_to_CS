#include <iostream>

using namespace std;


int age;

int birthYear(int age) {
	int birthYear = 2021-age;
	return birthYear;
}



int main () {
	
	cout<<"How old are you?"<<endl;
	cin>>age;
	cout<<"You were born in "<<birthYear(age)<<endl;
	
	return 0;
}