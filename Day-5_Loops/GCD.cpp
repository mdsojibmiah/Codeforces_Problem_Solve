#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int A, B;
    cin >> A >> B;

    // Calculate GCD using the custom function
    int result = gcd(A, B);
    
    cout << result << endl;
    return 0;
}
