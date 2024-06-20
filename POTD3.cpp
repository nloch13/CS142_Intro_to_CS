#include <iostream>

using namespace std;

void classesToday() {
	int CN;
	cout<<"How many classes do you have today?"<<endl;
	cin>>CN;
	
	if(CN>=3) {
		cout<<"You have a busy day"<<endl;
	}else if (CN==1 || CN==2) {
		cout<<"That's good, not crazy busy"<<endl;
	} else if (CN==0) {
		cout<<"Interesting... you are in class right now."<<endl;
	}else if (CN<0 || CN>3) {
		cout<<"That is not a valid responce.Please try again."<<endl;
	}
	
	}
	


int main () {
	
	classesToday();
	
	
	
	
	return 0;
}