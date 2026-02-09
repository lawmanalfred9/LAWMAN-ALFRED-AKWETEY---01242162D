#include <iostream>
#include <string>
#include <algorithm> // Required for remove_if

using namespace std;

// Function to check if a character is a vowel
bool isVowel(char c) {
    c = tolower(c); // Handle both 'A' and 'a'
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string removeVowels(string sentence) {
    // 1. remove_if moves non-vowels to the front and returns an iterator to the new "end"
    // 2. erase removes the leftover "junk" at the back
    sentence.erase(remove_if(sentence.begin(), sentence.end(), isVowel), sentence.end());
    return sentence;
}

int main() {
    string myString = "The quick brown fox jumps over the lazy dog.";
    cout << "Result: " << removeVowels(myString) << endl;
    return 0;
}

