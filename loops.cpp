#include <iostream>

using namespace std;

int main () {
	
	
	// "--" decrese by 1 every time 
	//"++" increases by 1 every time
	/*for(int i=10;i>=0;i--){
		cout<<i<<endl;
	}
	
	for(int i=0;i<22;i+=2){
		cout<<i<<" "<<endl;
	}
	
	for(int i=100;i>=0;i-=5)
		
		if (i==0) {
			cout<<i<<" "<<endl;
	}else if(i=0) {
		cout<<"Congrats"<<endl;
	}
		
		//While Loops 
		
		
		int n=1;
		while(n<=10) {
			if(n%2==0) {     //Gives only even numbers
				cout<<n<< " ";
			}
			n++;
		}
		
		
		cout<<"enter a positive number:";
		int positiveNum;
		cin>>positiveNum;
		while(positiveNum>0) {
			cout<<positiveNum<<endl;
			positiveNum--;
		}
		cout<<"END"<<endl;
		
		
		cout<<"Enter a number(enter -1 to quit): ";
		int MyNum;
		int MySum=0;
		cin>>MyNum;
		while(MyNum>0) {
			MySum+=MyNum;
			cout<<"Enter another number (-1 to quit) :";
			cin>>MyNum;
		}
		cout<<"\nYour number total is "<<MySum;
		
		int x=0;
		do {
			cout<<"Current Number: "<<x<<end;
			x++;
		} while(x<=10);*/
	
	
	
	
	char select;	
	do {
		double height, width;
		cout<<"Enter height and width separated by a space: ";
		cin>>height>>width;
		
		double area = height * width;
		cout<<"THe area is "<< area<<"."<<endl;
		cout<<"Do you want to do antoher caalculation? y/n"<<endl;
		cin>>select;
	} while(select=='y' || select=='Y');
	
	cout<<"Thanks"<<endl;
	
		
	return 0;
}