/*
    Problem Name : Translation
    Link : https://codeforces.com/problemset/problem/41/A
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;

    reverse(s.begin(),s.end());
    if(s==t){
        cout<<"YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
