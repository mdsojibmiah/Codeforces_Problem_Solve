#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	double x,p;
	cin >> x >> p;

	double orginal_price = (100*p)/(100-x);

	cout << fixed << setprecision(2) << orginal_price << "\n";

	return 0;
}
