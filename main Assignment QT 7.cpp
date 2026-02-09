#include <iostream>
#include <vector>

using namespace std;

vector<int> removeEvens(const vector<int>& nums) {
    vector<int> result;

    // Use a standard index-based loop for compatibility
    for (size_t i = 0; i < nums.size(); ++i) {
        // A number is ODD if (remainder != 0)
        // This handles positive (1) and negative (-1) correctly
        if (nums[i] % 2 != 0) {
            result.push_back(nums[i]);
        }
    }

    return result;
}

int main() {
    // Initializing vector the old way for maximum compatibility
    vector<int> input;
    input.push_back(1);
    input.push_back(2);
    input.push_back(4);
    input.push_back(7);
    input.push_back(-3);

    vector<int> result = removeEvens(input);

    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

