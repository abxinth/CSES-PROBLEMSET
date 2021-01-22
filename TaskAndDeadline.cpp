#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int a,d;
	vector<pair<int,int>> v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>d;
		v.push_back(make_pair(a,d));
	}
	sort(v.begin(),v.end());
	long reward = 0;
	long clock = 0;
	long ptr=0;
	while(ptr != v.size()){
		clock+=v[ptr].first;
		reward += (long)v[ptr].second - (long)clock;
		ptr++;
	}
	cout<<reward;
	return 0;
}
