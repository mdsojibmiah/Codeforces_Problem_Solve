#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long maxNum = 0;
    long long number;

    for (int i = 0; i < N; i++) {
        cin >> number;
        maxNum = max(maxNum, number);
    }

    cout << maxNum << endl; 

    return 0;
}
