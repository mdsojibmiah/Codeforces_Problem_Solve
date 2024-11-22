/*
     Author: Error_404_Coder
     Email: mdsojibmiah.coder@gmail.com
     Problem Link:https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int minSum = INT_MAX;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int sum = arr[i] + arr[j] + (j - i);
                if (sum < minSum) {
                    minSum = sum;
                }
            }
        }
    	cout << minSum << endl;
    }
    return 0;
}
