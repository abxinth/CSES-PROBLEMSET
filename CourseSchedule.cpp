#include<iostream>
#include<vector>
using namespace std;
int n,m,a,b;
vector<int> adj[200001];
int color[200001];
vector<int> ts;
int flag = 0;

void dfs(int k){
    if(flag == 1)return;
    color[k] = 1;
    for(auto c : adj[k]){
        if(color[c] == 2)continue;
        if(color[c] == 1){
            flag = 1;
            return;
        }
        dfs(c);
    }
    ts.push_back(k);
    color[k] = 2;
}

int main(){
cin>>n>>m;
for(int i=0;i<m;i++){
    cin>>a>>b;
    adj[a].push_back(b);
}
for(int i=1;i<=n;i++){
    if(color[i])continue;
    dfs(i);
}
if(flag == 1){
    cout<<"IMPOSSIBLE";
    return 0;
}
for(auto x = ts.rbegin(); x != ts.rend();x++){
    cout<<*x<<" ";
}
return 0;
}
