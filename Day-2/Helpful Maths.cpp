#include <iostream>
#include <algorithm>  // For sort function
using namespace std;

int main() {
    string s;
    cin >> s;  // Input the string representing the sum
    
    string numbers = "";  // To store only the digits (1, 2, 3)
    
    // Step 1: Extract digits from the input string
    for (int i = 0; i < s.size(); i += 2) {
        numbers += s[i];  // Add only digits, ignore the '+'
    }
    
    // Step 2: Sort the digits in non-decreasing order
    sort(numbers.begin(), numbers.end());
    
    // Step 3: Rebuild the sorted sum with '+' between digits
    for (int i = 0; i < numbers.size(); i++) {
        if (i > 0) cout << "+";  // Add '+' between numbers
        cout << numbers[i];  // Print the current digit
    }
    return 0;
}
