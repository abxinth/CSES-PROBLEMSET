#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define usl long long
usl n,m,k;
usl a[200001],b[200001];
int main(){
	usl i,j;
	cin>>n>>m>>k;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<m;i++){
		cin>>b[i];
	}

	sort(a,a+n);
	sort(b,b+m);

	usl ans = 0;
	for(i=0,j=0;i<n;i++){

		while(j<m&&b[j]<a[i]-k){
			++j;
		}
		if(j<m&&b[j]<=a[i]+k){
			++ans,++j;
		}
	}
	cout<<ans;
	return 0;
}