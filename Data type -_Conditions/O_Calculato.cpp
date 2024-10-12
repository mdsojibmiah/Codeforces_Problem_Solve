#include <iostream>
using namespace std;
int main (){
	int A,B;
	char C;
	cin >> A >> C >> B;

	if(C=='+'){
		cout << A + B << "\n";
	}	
	if(C=='-'){
		cout << A - B << "\n";
	}	
	if(C=='*'){
		cout << A * B << "\n";
	}
	if(C=='/'){
		cout << A / B << "\n";
	}
	return 0;
}