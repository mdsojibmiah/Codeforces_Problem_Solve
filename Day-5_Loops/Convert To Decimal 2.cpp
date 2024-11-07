//Convert To Decimal 2
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int countOfOnes = 0;
        int temp = N;
        
        while (temp > 0) {
            countOfOnes += (temp & 1); 
            temp >>= 1;
        }
        int result = (1 << countOfOnes) - 1;

        cout << result << endl;
    }
    return 0;
}
