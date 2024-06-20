/*-------------------------------------------------------------
* Assignment 7: Secret Message
* Developer: Nate Loch
* Date: 11/9/21
*-------------------------------------------------------------*/

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int key ;
int encryptVar;
string message=" ";
char savefile


void decrypt(){     //shifts letters back and decrypts the messgae 
	getline(cin, message);
	for(int looper=0; looper<message.length(); looper++) {
		if(isalpha(message[looper])){
			for(int i=key;i>0;i--);
				if(message[looper]=='z')
					message[looper]=='a';
		else message[looper]--;
		}
	}
	cout<<"The decrypted message is: "<<message<<endl;
}
	

void encrypt(){       //shifts letters forward and encrypts the messgae
	getline(cin, message);
	for(int looper=0; looper<message.length(); looper++){
		if(isalpha(message[looper])){
			for(int i=0; i<key; i++) 
				if(message[looper]=='z')
					message[looper]=='a';
			else message[looper]++;
		}
	}
	cout<<"The encrypted message is: "<<message<<endl;
}

/*void savefile() {     // Saves the file
 ofstream savefile;
 string filename;
 getline(cin, filename);
 savefile.open(filename.c_str());
 savefile<<savename<<endl;
 savefile.close();
}*/
 
	


int main(){

	cout<<"----------------------------------------"<<endl;
	cout<<"*Secret Codes*"<<endl;
	
	/*cout<<"Enter a file name for your message to be saved under: "<<endl;
	cin<<savename;
	savefile()*/
	
	cout<<"What you like the number shift key to be?"<<endl;
	cin>>key;
	
	char choice;
	cout<<"Would you like to encrypt(e) or decript(d) your message?";
	cin>>choice;
	char message; 
	
	
	if (choice=='e' || choice=='E'){
		cout<<"Please enter the message you would like to encrypt:"<<endl;
		getline(cin, message);
		encrypt();
		cout<<"Thank you for useing our services."<<endl;
	}
	if (choice=='d' || choice=='D'){
		cout<<"Please enter the message you would like to decrypt: "<<endl;
		getline(cin, message);
		decrypt();
		cout<<"Thank you for participating!"<<endl;	
	}
	
	
	
	
return 0;


}