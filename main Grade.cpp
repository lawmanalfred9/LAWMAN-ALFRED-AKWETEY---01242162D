#include <iostream>
#include <cmath> //needed for round()
using namespace std;

int main(int argc, char** argv) { 
	double rawScore;
	int score;
	
	
	cout<<"Program To Find Grades"<<endl;
	cout<<"Enter Your Scores"<<endl;
	cin>>rawScore;
	
	score = round(rawScore);
	
	cout<<"Round Score: "<<score<<endl;
	
	if(score>=80) {
	cout<<"Grade A"<<endl;
	cout<<"Excellent"<<endl;
	cout<<"You're 'PROMOTED' for the next class."<<endl;
	cout<<"Thank You!"<<endl;
	}
	
	else if(score>=70) {
	cout<<"Grade B"<<endl;
	cout<<"Very Good"<<endl;
	cout<<"You're 'PROMOTED' for the next class."<<endl;
	cout<<"Thank You!"<<endl;
	}

	else if(score>=60) {
	cout<<"Grade C"<<endl;
	cout<<"Good"<<endl;
	cout<<"You're 'PROMOTED' for the next class."<<endl;
	cout<<"Thank You!"<<endl;
	}
	
	else if(score>=50)  {
	cout<<"Grade D"<<endl;
	cout<<"Credit"<<endl;
	cout<<"You're 'PROMOTED' for the next class."<<endl;
	cout<<"Thank You!"<<endl;
	}
	
	else  {
	cout<<"Grade F"<<endl;
	cout<<"You're 'REPEATED' for the next class."<<endl;
	cout<<"FAIL AGAIN and You'll be SACKED!"<<endl;
	cout<<"Thank You!"<<endl;
	}
	
	return 0;
	
}
