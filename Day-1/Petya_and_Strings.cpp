/*
    Problem name : Petya and Strings
    Link : https://codeforces.com/problemset/problem/112/A
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;

    for(int i=0;i<s1.length();i++){
        s1[i]=toupper(s1[i]);
        s2[i]=toupper(s2[i]);
    }
    if(s1<s2){
        cout<<-1;
    }
    if(s2<s1){
        cout<<1;
    }
    if(s1==s2){
        cout<<0;
    }
    return 0;
}