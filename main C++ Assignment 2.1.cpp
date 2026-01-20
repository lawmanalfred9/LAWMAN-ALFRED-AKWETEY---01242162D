#include <iostream>
#include <string>
using namespace std;

int main() {
    const string SECRET_PASS = "C++Rocks";
    string userInput;

    do {
        cout << "Enter password: ";
        cin >> userInput;

        if (userInput != SECRET_PASS) {
            cout << "Wrong! Try again." << endl;
        }

    } while (userInput != SECRET_PASS);

    cout << "Access Granted." << endl;
    return 0;
}
