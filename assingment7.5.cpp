#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int encryptM;
int Key;
string message=" ";
char saveName;

void decrypt() {   //shifts letters back and decrypts the messgae 
	getline(cin, message);
	for(int w=0; w<message.length(); w++){
		if(isalpha(message[w])){
			for(int i=Key;i>0;i--)
				if(message[w]=='z')
					message[w]=='a';
			else message[w]--;
		}
	}
	cout<<"Your decrypted message is "<<message<<" ."<<endl;
	}

void encrypt() {    //shifts letters forward and encrypts the messgae
	getline(cin, message);
	for(int w=0; w<message.length(); w++){
		if(isalpha(message[w])){
			for(int i=0;i<Key;i++) 
				if(message[w]=='z')
					message[w]=='a';
			else message[w]++;
		}
	}
	cout<<"Your encrypted message is "<<message<<" ."<<endl;
}

/*void saveFile() {
	ofstream saveFile;
	string filename;
	
	getline(cin, filename);
	
	saveFile.open(filename.c_str());
	saveFile<<saveName<<endl;
	saveFile.close();
	
}*/

	
int main() {
	
	cout<<"----------------------------------------"<<endl;
	cout<<"*Secret Codes*"<<endl;
	
	/*cout<<"Enter a file name to save your message under: "<<endl;
	cin>>saveName;
	saveFile();*/
	
	cout<<"Enter the number of letters you would like your message to shift: "<<endl;
	cin>>Key;
	
	char choice;
	cout<<"Would you like to encrypt (e) or decrypt (d) your message?"<<endl;
	cin>>choice;
	
	if(choice=='E' || choice=='e') {
		cout<<"Please enter your message: ";
		getline(cin, message);
		encrypt();
		cout<<"Thank you for using our services!"<<endl;
	}else if(choice=='D' || choice=='d') {
		cout<<"Please enter your message: ";
		getline(cin, message);
		decrypt();
		cout<<"Thank you for using our services!"<<endl;
	}
	
	
	
	
	return 0;
}