#include <iostream>
using namespace std;
 
int main() {
    int t; // number of test cases
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        // We will check the parity of elements at odd and even indices
        bool odd_parity_mismatch = false, even_parity_mismatch = false;
        
        // Checking the parity of odd indexed elements
        for (int i = 0; i < n; i += 2) {
            if (a[i] % 2 != a[0] % 2) {
                odd_parity_mismatch = true;
                break;
            }
        }
 
        // Checking the parity of even indexed elements
        for (int i = 1; i < n; i += 2) {
            if (a[i] % 2 != a[1] % 2) {
                even_parity_mismatch = true;
                break;
            }
        }
 
        // If there is no mismatch in either odd or even indices, it's possible
        if (!odd_parity_mismatch && !even_parity_mismatch) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}