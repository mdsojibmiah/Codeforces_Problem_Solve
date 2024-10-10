/*
    Problem Name : Boy OR Girl
    Link : https://codeforces.com/problemset/problem/236/A
*/

#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){

    string username;
    cin >> username;
    //set<char>: Only stores unique characters.
    set<char> distnic_char(username.begin(),username.end());
    int check = distnic_char.size();

    if(check%2==0){
        cout<< "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }

    return 0;
}
