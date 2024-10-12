#include <iostream>
#include <cctype>
using namespace std;
int main(){
	char X;
	cin >> X;

	if(islower(X)){
		X = toupper(X);// Convert to uppercase using toupper()
	}
	else if(isupper(X)){
		X = tolower(X);// Convert to lowercase using tolower()
	}
	cout << X;

	return 0;
}