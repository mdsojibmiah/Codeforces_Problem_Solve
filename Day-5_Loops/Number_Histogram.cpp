#include <iostream>
#include <vector>

using namespace std;

int main() {
    char symbol;
    int N;

    // Read the symbol
    cin >> symbol;

    // Read the number of entries
    cin >> N;

    // Vector to store the numbers
    vector<int> numbers(N);

    // Read the numbers
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    // Print the histogram
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < numbers[i]; ++j) {
            cout << symbol;
        }
        cout << endl; // New line after each histogram line
    }

    return 0;
}
