#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    int t; // number of test cases
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        unordered_map<int, int> freq; // to store the frequency of each number
        int ans = -1; // stores the answer, initially -1
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            // Increment frequency count for x
            freq[x]++;
 
            // If any number appears 3 times, we store it in ans
            if (freq[x] == 3) {
                ans = x;
            }
        }
 
        // Print the answer for this test case
        cout << ans << endl;
    }
 
    return 0;
}