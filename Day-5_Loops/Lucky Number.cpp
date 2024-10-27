#include <iostream>
#include <vector>

using namespace std;

bool isLucky(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        number /= 10;
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;
    
    vector<int> luckyNumbers;
    
    for (int i = A; i <= B; ++i) {
        if (isLucky(i)) {
            luckyNumbers.push_back(i);
        }
    }

    if (luckyNumbers.empty()) {
        cout << -1 << endl;
    } else {
        for (size_t i = 0; i < luckyNumbers.size(); ++i) {
            cout << luckyNumbers[i];
            if (i < luckyNumbers.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
