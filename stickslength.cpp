#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int n,arr[200001];
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}	
	sort(arr,arr+n);
	ll x = arr[n/2];
	ll ans = 0;
	for(int i=0;i<n;++i){
		ans+=abs(arr[i] - x);
	}
	cout<<ans;
	return 0;
}