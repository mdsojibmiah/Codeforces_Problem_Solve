#include <iostream>
using namespace std;
int main(){

	int N;cin>>N;
	for(int i=0;i<N;i++){
		int start = (4*i)+1;
		cout << start << " " << start + 1 << " " << start + 2 << " PUM" << "\n";
	}
	return 0;
}
