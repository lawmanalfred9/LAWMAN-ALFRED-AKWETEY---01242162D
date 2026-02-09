#include <iostream>
#include <vector>

using namespace std;

// The function
double getAverage(vector<int> numbers) {
    if (numbers.size() == 0) {
        return 0;
    }

    double sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum = sum + numbers[i];
    }

    return sum / numbers.size();
}

// The main part of the program to test the function
int main() {
    vector<int> myNumbers;
    
    // Adding numbers one by one (most compatible way)
    myNumbers.push_back(10);
    myNumbers.push_back(20);
    myNumbers.push_back(30);
    myNumbers.push_back(40);

    double result = getAverage(myNumbers);

    cout << "Average: " << result << endl;

    return 0;
}

