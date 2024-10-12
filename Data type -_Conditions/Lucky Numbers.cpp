#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int last = n%10;
    int first = n/10;
    if(last%first==0 || first%last==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}