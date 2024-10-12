#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int A,B;
	cin >> A >> B;
	//We use static_cast<double> to ensure floating-point division, even though A and B are integers.
	double a = static_cast<double>(A) / B;
	cout << "floor" << " " << A << " " << "/" << " " << B << " " << "=" << " " << floor(a)<< "\n";
	cout << "ceil" << " " << A << " " << "/" << " " << B << " " << "=" << " " << ceil(a) << "\n";
	cout << "round" << " " << A << " " << "/" << " " << B << " " << "=" << " " << round(a) << "\n";
	return 0;
}
