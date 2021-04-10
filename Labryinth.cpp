#include<iostream>
#include<vector>
using namespace std;

char grid[1001][1001];
bool visited[1001][1001];
vector<char> path;
int n,m;
int flag = 0;
void grid_search(int x,int y){
    if(flag == 1 || x<0 || y<0 || x >n-1 || y>m-1 || visited[x][y] || grid[x][y] == '#')return;
    if(grid[x][y] == 'B'){
        flag = 1;
        cout<<"YES\n"<<path.size()<<"\n";
        for(auto c : path){
            cout<<c;
        }
        return;
    }
    //visited[x][y] = true;

    path.push_back('R');
    grid_search(x,y+1);
    path.pop_back();

    path.push_back('L');
    grid_search(x,y-1);
    path.pop_back();

    path.push_back('U');
    grid_search(x-1,y);
    path.pop_back();


    path.push_back('D');
    grid_search(x+1,y);
    path.pop_back();




}

int main(){
cin>>n>>m;
int ai,aj;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>grid[i][j];
        if(grid[i][j] == 'A'){
            ai=i;
            aj=j;
        }
    }
}
grid_search(ai,aj);
if(flag == 0){
    cout<<"NO";
}
return 0;
}
