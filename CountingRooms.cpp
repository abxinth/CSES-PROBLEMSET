#include<iostream>

using namespace std;
char g[1001][1001];
int n,m;
void pollute(int x,int y){
	if(g[x][y] == '#' || x<0 || y<0 || x>=n || y>=m){
		return;
	}
	g[x][y] = '#';
	
	pollute(x,y+1);
	pollute(x-1,y);
	pollute(x+1,y);
	pollute(x,y-1);
}

int main(){

	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>g[i][j];
		}
	}
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(g[i][j] == '.'){
				count++;
				pollute(i,j);
			}
		}
	}
	cout<<count;
	return 0;
}
