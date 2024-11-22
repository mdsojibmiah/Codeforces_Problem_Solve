/*
     Author: Error_404_Coder
     Email: mdsojibmiah.coder@gmail.com
     Problem Link:https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,r,mi=INT_MAX;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				r=a[i-1]+a[j-1]+(j-i);
				mi=min(mi,r);
			}
		}
	}
	cout << mi;
	return 0;
}