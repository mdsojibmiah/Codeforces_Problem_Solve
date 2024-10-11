/*
    Problem Name : Team
    Link : https://codeforces.com/problemset/problem/231/A
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    int count1=0;
    cin>>n;
    // Check if at least two friends are sure (sum of p, v, t >= 2)
    for(int i=0;i<n;i++){
        int p,v,t;
        cin>>p>>v>>t;// Petya, Vasya, Tonya's surety (0 or 1)
        if((p+v+t)>=2){
            count1++;
        }
    }
    cout<<count1<<"\n";
    return 0;
}
