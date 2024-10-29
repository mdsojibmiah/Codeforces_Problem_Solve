#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N; // Read the number of rows

    for (int i = 1; i <= N; ++i) {
        // Print '*' i times for each row
        for (int j = 0; j < i; ++j) {
            cout << '*';
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
