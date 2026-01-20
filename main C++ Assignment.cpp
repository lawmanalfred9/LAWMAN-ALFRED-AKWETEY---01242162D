#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int number;
	
	cout<<"Enter an Integer"<<endl;
	cin>>number;
	
	if(number % 2 == 0) {
		cout<<"Even"<<endl;
	}
	else{
		cout<<"Odd"<<endl;
	}
	
	return 0;
}
