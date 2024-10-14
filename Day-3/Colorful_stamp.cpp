#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        bool possible = true;
        int i = 0;
        
        while (i < n) {
            if (s[i] == 'W') {
                i++;
                continue;
            }
            
            // We have encountered a non-W segment
            bool hasR = false, hasB = false;
            while (i < n && s[i] != 'W') {
                if (s[i] == 'R') hasR = true;
                if (s[i] == 'B') hasB = true;
                i++;
            }
 
            // Check if the current non-white segment is valid
            if (!(hasR && hasB)) {
                possible = false;
                break;
            }
        }
        
        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}