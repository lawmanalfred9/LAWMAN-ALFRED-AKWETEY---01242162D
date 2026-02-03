#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int matrix[3][4] = {
	{4, 5, 6, 7},
	{1, 2, 4, 8},
	{10, 11, 12, 13}
	};
	
	cout<<"The computed matrix is:"<<endl;
	
	for (int i=0; i<3; i++) {
		for (int j=0; j<4; j++) {
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
	return 0;
}
