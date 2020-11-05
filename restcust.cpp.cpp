#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define us unsigned int

ll n,i,a;
array<int,2> s[400001];

int main(){
	cin>>n;
	for(i=0;i<2*n;i+=2){
		cin>>a;
		s[i][0] = a;
		s[i][1] = 0;
		cin>>a;
		s[i+1][0] = a;
		s[i+1][1] = 1;  
	}
	ll max=0,cur=0;
	sort(s,s+2*n);
	for(i=0;i<2*n;i+=1){
		if(s[i][1] == 0){
			cur++;
		}else{
			cur--;
		}
		if(cur>max){
			max = cur;
		}
	}
	cout<<max;


	return 0;
}