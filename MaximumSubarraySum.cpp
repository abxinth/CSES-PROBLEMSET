#include<iostream>

using namespace std;
int main(){
	long n;
	long arr[200001];
	long maxs = -99999999;
	cin>>n;
	for(long i=0;i<n;i++){
		cin>>arr[i];
	}
	long sum = 0;
	for(long i=0;i<n;i++){
		sum+= arr[i];
		sum = max(sum,arr[i]);
		maxs = max(sum, maxs);
	}
	cout<<maxs;
	return 0;
}
