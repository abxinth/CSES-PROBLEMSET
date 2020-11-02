#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define usl unsigned long
usl n;
usl arr[200001];
int main(){
	usl i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	usl prev = arr[0];
	usl countx = 1;
	for(i=1;i<n;i++){
		if(prev != arr[i]){
			countx +=1;
			prev = arr[i];
		}
	}
	cout<<countx;
	return 0;
}