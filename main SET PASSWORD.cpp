#include <iostream>
#include <string>

using namespace std;

int main() {
    const string SECRET_PASS = "C++Rocks";
    string userInput;
    int attempts = 0;
    const int MAX_ATTEMPTS = 3;

    do {
        cout << "Enter password: ";
        cin >> userInput;
        attempts++;

        if (userInput == SECRET_PASS) {
            cout << "Access Granted." << endl;
            break;
        }

        if (attempts == MAX_ATTEMPTS) {
            cout << "Locked Out." << endl;
            break;
        }

        cout << "Incorrect password. Try again." << endl;

    } while (true);

    return 0;
}
