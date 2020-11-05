#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,p[200001];

int main(){
	ll i;
	cin>>n;
	vector<int> s;
	for(i=0;i<n;i++){
		cin>>p[i];
	}
	
	for(i=0;i<n;i++){
		
		auto x = upper_bound(s.begin(), s.end(), p[i]);
		if(x == s.end()){
			s.push_back(p[i]);
		}else{
			s[x-s.begin()] = p[i];
		}
		
	}
	cout<<s.size();
}