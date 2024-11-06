#include <iostream>
using namespace std;
int main(){
    int N;cin>>N;
    // Top half of the diamond
    for(int i=1;i<=N;i++){
        cout << string(N-i, ' ') << string(2*i-1, '*') << "\n";
    }
    // Bottom half of the diamond
    for(int i=N;i>=1;i--){
        cout << string(N-i, ' ') << string(2*i-1,'*') << "\n";
    }
    return 0;
}
