#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch == 'z') {
        cout << 'a' << "\n";
    } else {
        cout << char(ch + 1) << "\n";
    }

    return 0;
}
