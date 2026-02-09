#include <iostream>
using namespace std;

int add_integers(int x, int y) {
	return x+y;
}

int main(int argc, char** argv) {
	int x,y;

	
	cout<<"Enter 1st integers"<<endl;
	cin>>x;
	cout<<"Enter 2nd integers"<<endl;
	cin>>y;
	cout<<"Sum: "<<add_integers(x,y)<< endl;
	return 0; 
}
