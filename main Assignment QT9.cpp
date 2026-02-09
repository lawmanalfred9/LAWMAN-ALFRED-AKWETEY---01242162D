#include <iostream>
#include <vector>

using namespace std;

// Function takes a vector by reference (to be efficient) and returns the total sum
long long calculateSum(const vector<int>& nums) {
    // We use 'long long' for the sum to prevent "Integer Overflow" 
    // if the list contains many large numbers.
    long long total = 0;

    // Traditional for loop for maximum compatibility
    for (size_t i = 0; i < nums.size(); ++i) {
        total += nums[i];
    }

    return total;
}

int main() {
    vector<int> myNumbers;
    myNumbers.push_back(10);
    myNumbers.push_back(20);
    myNumbers.push_back(30);
    myNumbers.push_back(40);

    long long result = calculateSum(myNumbers);

    cout << "The sum is: " << result << endl; // Output: 100

    return 0;
}

