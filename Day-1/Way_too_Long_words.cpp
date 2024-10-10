/*
    Problem Name : Way too long words
    Link : https://codeforces.com/problemset/problem/71/A
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string word;
        cin>>word;
        if(word.length()>10){
            cout<<word[0]<<word.length()-2<<word[word.length()-1]<< "\n";
        }
        else{
            cout<<word<<"\n";
        }
    }
    return 0;
}
