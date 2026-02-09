#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Required for reverse()

using namespace std;

// Function returns a NEW vector of reversed strings
vector<string> reverseStringsInList(const vector<string>& originalList) {
    vector<string> reversedList;

    // Use a traditional for loop for compatibility
    for (size_t i = 0; i < originalList.size(); ++i) {
        // 1. Create a copy of the current string
        string current = originalList[i];

        // 2. Reverse the characters in that copy
        // reverse() is a built-in C++ function from <algorithm>
        reverse(current.begin(), current.end());

        // 3. Add the reversed string to our new list
        reversedList.push_back(current);
    }

    return reversedList;
}

int main() {
    vector<string> words;
    words.push_back("apple");
    words.push_back("banana");
    words.push_back("cat");

    vector<string> result = reverseStringsInList(words);

    // Output the results using a standard loop
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    // Expected Output: elppa ananab tac 

    return 0;
}

