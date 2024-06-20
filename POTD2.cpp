#include <iostream>

using namespace std;

int main () {
	
	int i = 8;
	int half = i/2;
	for(i;i>=0;i--){
		if (i==half) {
			cout<<"there's only half the pizza left"<<endl;
		}else if (i==1) {
			cout<<"there's only 1 slice left"<<endl;
		}else if (i==0) {
			cout<<"there's no more pizza"<<endl;
		}else {
			cout<<"there are "<<i<<" slices of pizza left"<<endl;
		}
	}
		
	
	
	
	
	
	return 0; 
	
}