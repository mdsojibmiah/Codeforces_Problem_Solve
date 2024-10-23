#include <iostream>
using namespace std;
 
long long factorial(int N) {
    long long result = 1;
    for (int i = 2; i <= N; i++) {
        result *= i;
    }
    return result;
}
 
int main() {
    int T;
    cin >> T; 
 
    while (T--) { 
        int N;
        cin >> N;
        cout << factorial(N) << endl;
    }
 
    return 0;
}
