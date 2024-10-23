#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N < 2) {
        cout << -1 << endl; // If N is less than 2, no even numbers exist
        return 0;
    }

    for (int i = 2; i <= N; i += 2) {
        cout << i << endl; // Print even numbers
    }

    return 0;
}
