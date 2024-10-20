#include <iostream>
#include <cmath>  // for abs()
using namespace std;

string interval_sweep(int a, int b) {
    if (a == 0 && b == 0) {
        return "NO";
    }
    if (abs(a - b) <= 1) {
        return "YES";
    } else {
        return "NO";
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << interval_sweep(a, b) << "\n";
    return 0;
}
