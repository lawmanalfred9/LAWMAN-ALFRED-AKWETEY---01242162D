#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Required for sort()

using namespace std;

// We pass by value to create a copy, then return the sorted copy
vector<string> getSortedList(vector<string> words) {
    // 1. Sort the vector (uses the string < operator for alphabetical order)
    sort(words.begin(), words.end());
    
    // 2. Return the now-sorted copy
    return words;
}

int main() {
    vector<string> myWords;
    myWords.push_back("banana");
    myWords.push_back("apple");
    myWords.push_back("cherry");
    myWords.push_back("date");

    vector<string> sortedWords = getSortedList(myWords);

    // Using a standard for loop for maximum compatibility
    for (size_t i = 0; i < sortedWords.size(); ++i) {
        cout << sortedWords[i] << " ";
    }
    cout << endl;

    return 0;
}

