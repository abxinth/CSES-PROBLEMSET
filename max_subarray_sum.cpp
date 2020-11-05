#include<iostream>
using namespace std;


#define ll long long 
int main(){
	ll n,a[200001],i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ll best = -99,sum=-99;
	for(i=0;i<n;i++){
		sum = max(a[i],sum+a[i]);
		best = max(best,sum);

	}
	cout<<best;
	return 0;
}