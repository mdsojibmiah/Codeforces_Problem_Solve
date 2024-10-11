/*
    Problem Name :Pangram
    Link : https://codeforces.com/problemset/problem/520/A
*/
#include<iostream>
#include<ctype.h>
#include<string>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    set<char>S ;// Declare a set to store unique characters
    cin>>s;
    for(int i =0; i<s.length();i++){
        s[i]=toupper(s[i]);
        S.insert(s[i]); // Insert the character into the set
    }
    // Check if the size of the set is 26 (indicating all letters are present)
    if(S.size()==26){
        cout<<"YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}

