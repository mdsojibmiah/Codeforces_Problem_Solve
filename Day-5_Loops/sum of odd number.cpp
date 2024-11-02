#include <iostream>
using namespace std;

int sumOfOddNumbers(int x, int y) {
    if (x > y) swap(x, y);
    int start = x + 1;
    if (start % 2 == 0) start++;
    int end = y - 1;
    if (end % 2 == 0) end--;
    if (start > end) return 0;
    int n = (end - start) / 2 + 1;
    return n * (start + end) / 2;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << sumOfOddNumbers(X, Y) << endl;
    }
    return 0;
}