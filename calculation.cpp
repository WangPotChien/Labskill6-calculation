#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main () {
	double celcius_1,celcius_2,fahrenheit_1,fahrenheit_2=120;
	cout << "  Celcius  Fahrenheit  |  Fahrenheit  Celcius  \n";
	for (double celcius_1 = 40.0; celcius_1 >= 31.0; celcius_1--) {
		fahrenheit_1 = (9.0/5) * celcius_1 + 32;
		celcius_2 = (fahrenheit_2-32)/(1.8);
		cout << "  " <<fixed<<setprecision(1)<<celcius_1 <<"     "<<fixed <<setprecision(1)<<fahrenheit_1 <<"       ";
		if(celcius_1 <=37){
			cout << " ";
		}
		cout << "|  " <<fixed<<setprecision(1)<<fahrenheit_2 <<"    " <<fixed<<setprecision(2)<<celcius_2<<"\n";
		fahrenheit_2 -=10;
	}
	getch();
	return 0;
}
