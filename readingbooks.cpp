#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

#define ll long long
ll n;
ll a[200001];
ll sumx  = 0;
int main(){
	ll i;
	cin>>n;
	ll s = 0;
	for(i=0;i<n;i++){
		cin>>a[i];
		sumx+=a[i];
	}
	sort(a,a+n);
	cout<<max(sumx,2ll*a[n-1]);
	return 0;
}
