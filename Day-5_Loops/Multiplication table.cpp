#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the number

    for (int i = 1; i <= 12; i++) {
        cout << N << " * " << i << " = " << N * i << endl; // Print the multiplication table
    }

    return 0;
}
