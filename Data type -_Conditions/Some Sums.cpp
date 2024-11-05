#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    
    int totalSum = 0;
    
    for (int i = 1; i <= N; i++) {
        int sum = 0, num = i;
        
        // Calculate sum of digits
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        
        // Check if sum of digits is within range [A, B]
        if (sum >= A && sum <= B) {
            totalSum += i;
        }
    }
    
    cout << totalSum << endl;
    return 0;
}
