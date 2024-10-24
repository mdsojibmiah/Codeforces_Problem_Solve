#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int num = 2; num <= N; ++num) {
        bool isPrime = true;
        
        for (int i = 2; i * i <= num; ++i) { 
            if (num % i == 0) {
                isPrime = false; // Found a divisor, so it's not prime
                break;
            }
        }

        if (isPrime) {
            cout << num << " "; // Print the prime number
        }
    }
    
    cout << endl;
    return 0;
}
