/*
    Problem : A. Watermelon
    Link : https://codeforces.com/problemset/problem/4/A
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    /*
    Check if w is even.
    Check if w is greater than 2.
    If both conditions are satisfied, print "YES"; otherwise, print "NO".
    */
    int w;
    cin>>w;
    if(w%2 == 0 && w>2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
