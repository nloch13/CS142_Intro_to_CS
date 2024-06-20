#include <iostream>
#include <cmath>

using namespace std;

int weight;
int heightFeet;
int heightInch;
double bmi;

double bmiCalc(int weight, int feet, int inches) {
	int totalHeight = (feet*12)+inches;
	double sqrdHeight = pow(totalHeight, 2.0);
	
	double bmi = (weight/sqrdHeight)*703;
	
	return bmi;
	
}

int main() {
	
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(1);
	cout<<"---- BMI Calculator ----"<<endl;
	cout<<"Enter your weight, height in feet followed by inches: ";
	cin>>weight>>heightFeet>>heightInch;
	bmi=bmiCalc(weight, heightFeet, heightInch);
	cout<<"Your BMI is "<<bmi<<endl;
	
	
	return 0;
}