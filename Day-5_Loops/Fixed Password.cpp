#include <iostream>
using namespace std;

int main() {
    int password;

    while (true) {
        cin >> password; // Read each password

        if (password == 1999) {
            cout << "Correct" << endl; // Print if the password is correct
            break; // Exit the loop
        } else {
            cout << "Wrong" << endl; // Print if the password is wrong
        }
    }

    return 0;
}
