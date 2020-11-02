#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define usl unsigned long
usl n,a[200001],x;
int main(){
	usl i,j;
	cin>>n>>x;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	usl c=n;
	sort(a,a+n);
	for(i=0,j=n-1;i<j;i++){
		
		while(j>i && a[j]+a[i] > x)
			j--;
		if(a[i] + a[j] <= x){
			c--;
			j--;
		}
	}
	cout<<c;
	return 0;
}