#include <iostream>
#include <cstring>

using namespace std;

char upshift(char x) {
	//this will make the letter uppercase
	if(x<='a' && x<='z') {
		x=((x-(int)'a')+(int)'A');
		//97-97+67
	}
	return x;
}

char downshift(char x) {
	//This will make a letter lowercase
	if(x>='A' && x<='Z') {
		x=(char)((x-(int)'A')+(int)'a');
	}
	return x;
}

void fixCase(char words[], int wordLength){
	for(int i=0; i<wordLength; i++) {
		if (words[i]==0) {
			words[i]=upshift(words[i]);
		} 
		else if(words[i-1]==' ') {
			words[i]=upshift(words[i]);
		}
		else {
			words[i]=downshift(words[i]);
		}
	
}
}


int main() {
	char words[100];
	cout<<"Type in some words: ";
	cin.getline(words,100);
	int wordLength=strlen(words);
	cout<<"Original: "<<words<<endl;
	fixCase(words, wordLength);
	cout<<"New: "<<words<<endl;
	return 0;
}