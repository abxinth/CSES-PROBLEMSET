#include<iostream>
#include<bits/stdc++.h>
using namespace std;
unsigned long l[200001];
unsigned long copyx[200001];
unsigned long n;

long binarySearch(unsigned long arr[], unsigned long  l, unsigned long  r, unsigned long x) 
{ 
    if (r >= l) { 
        unsigned long mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 
unsigned long finder(unsigned long a ){
	unsigned long i;
	for(i=0;i<n;i++){
		if(copyx[i] == a){
			break;
		}
	}
	return i;
}

int main(){
	
	unsigned long i,x,z,a,b;
	cin>>n;
	cin>>x;
	for(i=0;i<n;i++){
		cin>>l[i];
		copyx[200001] = l[i];

	}
	sort(l,l+n);
	cout<<"\n";
	int flag = 0;
	for(i=0;i<n;i++){
		z = x - l[i];
		long  ans = binarySearch(l,0,n-1,z);
		if(ans>=0 && ans!=i){
			flag = 1;
			a = l[i];
			b = l[ans];
			break;
		}
	}
	if(flag == 1){
		cout<<finder(a)+1<<" "<<finder(b)+1;
	}else{
		cout<<"IMPOSSIBLE";
	}
	return 0;
}