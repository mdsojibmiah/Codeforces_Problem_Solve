/*
    Problem name : Word
    Link : https://codeforces.com/problemset/problem/59/A
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upp_count=0,low_count=0;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){//isupper function -By default, the characters from A to Z (ascii value 65 to 90) are uppercase characters.
            upp_count++;
        }
        else{
            low_count++;
        }
    }
    if(upp_count>low_count){
        for(int i=0;i<s.length();i++){
            s[i]= toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
    return 0;
}
