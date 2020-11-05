#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll i,j;
ll n,p[200001];
int main(){
	cin>>n;
	map<int,int> mp;
	ll ans = 0;
	for(i=0;i<n;++i){
		cin>>p[i];
	}
	for(i=0,j=0;i<n;i++){
		while(j<n&&mp[p[j]]<1){
			mp[p[j]]++;
			++j;
		}
		ans = max(j-i,ans);
		mp[p[i]]--;
	}
	cout<<ans;
	return 0;
}