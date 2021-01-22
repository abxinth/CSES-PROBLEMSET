#include<iostream>
#include<vector>

using namespace std;
int n,m;
char g[1001][1001];
int ai,aj;

int len = 0;
vector<char> path;
int finder(int x,int y){
	if(g[x][y] == '#' || x<0 || y<0 || x>=n || y>=m){
		return 0;
	}
	if(g[x][y] == 'B'){
		len++;
		return 1;
	}
	g[x][y]='#';
	if(finder(x+1,y)){
		path.push_back('D');
		len++;
		return 1;
	}
	if(finder(x-1,y)){
		len++;
		path.push_back('U');
		return 1;
	}
	if(finder(x,y+1)){
		len++;
		path.push_back('R');
		return 1;
	}
	if(finder(x,y-1)){
		path.push_back('L');
		len++;
		return 1;
	}
	return 0;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>g[i][j];
			if(g[i][j] == 'A'){
			
				ai = i;
				aj = j;
			}
		}
	}
	
	if(finder(ai,aj)){
		len--;
		cout<<"YES\n"<<len<<"\n";
		for(int i=len-1;i>=0;i--){
			cout<<path[i];
		}
		return 0;
	}
	cout<<"NO";
	
	
	
	return 0;
}
