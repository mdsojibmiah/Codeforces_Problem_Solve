#include <iostream>
using namespace std;
int main(){

	long long  N,M;
	cin >> N >> M;

	long long  last_digitN = N % 10;
	long long  last_digitM = M % 10;
	cout << (last_digitN+last_digitM);
	return 0;
}