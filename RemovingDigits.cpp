#include<iostream>
using namespace std;

#define INF 9999999
int n;
bool is_sums[1000001];
int sums[1000001];


int sumc(int x){
//	cout<<" "<<x;
	int count = INF;
	
	if(x < 0){
		return INF;
	}
	if(x==0){
		return 0;
	}
	if(is_sums[x]){
		return sums[x];
	}
	
	int y = x,rem;
	while(y > 0){
		rem = y % 10;
		y = y/10;
		if(rem==0)continue;
		count = min(count, sumc(x-rem)+1);
	}
	
	is_sums[x] = true;
	sums[x] = count;
	return count;
	
}

int main(){
	

	cin>>n;
	cout<<sumc(n);
	return 0;
}

