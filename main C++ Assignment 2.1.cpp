#include <iostream>
#include <string>
using namespace std;


int main(int argc, char** argv) {
	const string SECRET_PASS="C++Rocks";
	string userInput;
	int attempt=0;
	
	cout<<"Enter Your Password"<<endl;
	cin>>userInput;
	
	if (attempt>=3 && userInput !=SECRET_PASS) {
		cout<<"Lock Out!"<<endl;
	}
	while (userInput !=SECRET_PASS);
	
	if (userInput==SECRET_PASS) {
		cout<<"Access Granted"<<endl;
	}
	return 0;
}
