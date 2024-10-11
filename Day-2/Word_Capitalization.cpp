/*
    Problem Name: Word Capitalization
    Link : https://codeforces.com/problemset/problem/281/A
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0]==toupper(s[0])){
        cout<<s;
    }
    else if(s[0]==tolower(s[0])){
        s[0]=toupper(s[0]);
        cout<<s;
    }
    return 0;
}
