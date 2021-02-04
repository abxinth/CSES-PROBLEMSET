#include<iostream>
 
using namespace std;
#define MOD 1000000007
 
int n;
char grid[1001][1001];
long val[1001][1001];
bool ival[1001][1001];
 
 
long solve(int i,int j){
	long result = 0;
	if(i==n && j==n){
		return 1;	
	}
 
	if(i>n || j>n || grid[i][j] == '*'){
		return 0;
	}
	if(ival[i][j]){
		return val[i][j];
	}

	result += solve(i,j+1);
	result += solve(i+1,j);
	result = result%MOD;
	ival[i][j] = true;
	val[i][j] = result;	
	return result;
}
 
int main(){
	int i,j;
 
	
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>grid[i][j];
		}
	}
	if(grid[1][1] == '*' || grid[n][n] == '*'){
		cout<<0;
		return 0;
	}	
	cout<<solve(1,1);
	return 0;
}
