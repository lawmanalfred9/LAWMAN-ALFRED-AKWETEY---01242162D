#include <iostream>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double celcius, Fahrenheit;
	
	cout<<"Enter Temperature in celcius"<<endl;
	cin>>celcius;
	
	Fahrenheit=(celcius * 1.8)+ 32;
	
	cout<<"Temperature in Fahrenheit"<<endl;
	
	if (celcius <0) {
		cout<<"Freeze"<<endl;
	} 
	else  {
		cout<<"Hot"<<endl;
	}
	return 0;
}
