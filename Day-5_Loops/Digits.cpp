#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (N == 0) {
            cout << "0";
        } else {
            while (N > 0) {
                cout << N % 10 << " ";
                N /= 10;
            }
        }
        cout << endl;
    }
    return 0;
}