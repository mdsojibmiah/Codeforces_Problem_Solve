#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;
    int number;

    for (int i = 0; i < N; i++) {
        cin >> number;

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        }
    }

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount << endl;

    return 0;
}
