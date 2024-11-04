#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
