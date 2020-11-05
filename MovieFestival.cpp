#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll n;
array<int ,2> a[200001];
int main(){
	cin>>n;
	for(ll i=0;i<n;++i){
		cin>>a[i][1]>>a[i][0];
	}
	sort(a,a+n);
	ll ans=0,l=0;
	for(ll i=0;i<n;++i){
		if(a[i][1]>=l){
			++ans;
			l = a[i][0];
		}
	}
	cout<<ans;
	return 0;
}