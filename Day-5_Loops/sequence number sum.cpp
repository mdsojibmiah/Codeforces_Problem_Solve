#include <iostream>
using namespace std;

int main() {
    int N, M;
    
    while (cin >> N >> M && N > 0 && M > 0) {
        int start = min(N, M);
        int end = max(N, M);
        int sum = 0;

        for (int i = start; i <= end; ++i) {
            cout << i << " ";
            sum += i;
        }
        
        cout << "sum =" << sum << endl;
    }
    
    return 0;
}