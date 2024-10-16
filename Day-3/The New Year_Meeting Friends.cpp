#include <iostream>
using namespace std;
int main(){

	int x1,x2,x3;
	int mid_value,total_dis;
	cin >> x1 >> x2 >> x3;

	int max_value = max(x1, max(x2, x3));
	int min_value = min(x1, min(x2, x3));

	mid_value = (x1 + x2 + x3) - max_value - min_value;
	total_dis = (max_value - mid_value) + (mid_value - min_value);
	cout << total_dis;
	
	return 0;
}