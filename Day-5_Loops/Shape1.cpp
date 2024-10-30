#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the number of rows

    for (int i = N; i >= 1; --i) {
        for (int j = 0; j < i; ++j) {
            cout << "*"; // Print stars
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
