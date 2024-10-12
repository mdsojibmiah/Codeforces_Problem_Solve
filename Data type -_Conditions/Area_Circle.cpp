#include <iostream>
#include <iomanip>  // for setprecision and fixed
using namespace std;

int main() {
    double R;
    const double pi = 3.141592653;  // Define pi value

    // Reading the radius
    cin >> R;

    // Calculate the area of the circle
    double area = pi * R * R;

    // Output the area with 9 digits after the decimal point
    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
