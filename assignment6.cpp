#include <iostream>
#include <fstream>
#include <algorithm>


using namespace std;

/*-------------------------------------------------------------
* Assignment 6: ES Program

* Developer: Nate Loch 
* Date: 11/3
*-------------------------------------------------------------*/

void openData (int A[], int &length){
	ifstream f;
	f.open("exam.txt");
	f>>length;
	for(int i=0; i<length; i++){
		f>>A[i];
	}f.close();
	
}

int low(int C[], int length){
	int min= C[0];
	for (int i=0; i<length; i++){
		if (C[i]<min) {
			min=C[i];
		}
	}
	return min;
}
int high(int C[], int length){
	int max= C[0];
	for (int i=0; i<length; i++){
		if (C[i]>max) {
			max=C[i];
		}
	}
	return max;
}
int average(int D[], int length){
	double totalscores;
	double averagescores;
	for(int i=0; i<length; i++){
		totalscores= D[i]+totalscores;
	}
	averagescores= totalscores/length;
	return averagescores;
}
void GradeSorter (int E[], int length){
	int gradeA=0;
	int gradeB=0;
	int gradeC=0;
	int gradeD=0;
	int gradeF=0;
	for(int i=0; i<length; i++){
		if(E[i]>=90){
			gradeA++;
		}
		else if (E[i]>=80 && E[i]<90){
			gradeB++;
		}
		else if (E[i]>=70 && E[i]<80){
			gradeC++;
		}
		else if (E[i]>=60 && E[i]<70){
			gradeD++;
		}
		else if (E[i]<60){
			gradeF++;
		}
	}
	cout<<"There are a total of "<<length<<" scores:"<<endl;
	cout<<"As: "<<gradeA<<endl;
	cout<<"Bs: "<<gradeB<<endl;
	cout<<"Cs: "<<gradeC<<endl;
	cout<<"Ds: "<<gradeD<<endl;
	cout<<"Fs: "<<gradeF<<endl;
}

double MedianFuction(int F[], int length) {
	double median;
	std::sort(F, F + length);
	median = F[(length / 2)];
	if (length % 2 == 0){
		median = (median + F[length / 2 -1]) /2;
	}
	return median;
}

int main () {
	cout<<"-------------------------------"<<endl;
	
	int length;
	int score[1000];
	int gradeA;
	int gradeB;
	int gradeC;
	int gradeD;
	int gradeF;
	
	openData(score, length);
	cout<<"** Exam Statistics Program **"<<endl;
	cout<<"Minimum Score: "<<low(score, length)<<endl;
	cout<<"Maximum Score: "<<high(score, length)<<endl;
	cout<<"Average Score: "<<average(score, length)<<endl;
	cout<<"Median Score: "<<MedianFuction(score, length)<<endl;
	GradeSorter(score, length);
	
	
	cout<<"-------------------------------"<<endl;
	
	return 0;
	
}
	