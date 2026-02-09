#include <iostream>
#include <string>

using namespace std;

// Function takes the array and its size
string findLongest(string arr[], int size) {
    if (size <= 0) return "";

    string longest = arr[0];

    for (int i = 1; i < size; i++) {
        // Compare lengths using .length()
        if (arr[i].length() > longest.length()) {
            longest = arr[i];
        }
    }
    return longest;
}

int main() {
    string words[] = {"blue", "red", "aquamarine", "green"};
    int n = sizeof(words) / sizeof(words[0]); // Calculate array size

    cout << "Longest: " << findLongest(words, n) << endl;
    return 0;
}

