#include<iostream>
#include<vector>
using namespace std;
int n,m,a,b;
vector<int> adj[100001];
int flag;

int colored[100001];

void dfs(int k,int c){

    if(flag == 1){
        return;
    }
    if(c == 1){
        c = 2;
    }else{
        c = 1;
    }
    colored[k] = c;

    for(auto x : adj[k]){
        if(colored[x]){
            if(colored[x] == c){
                flag = 1;
                return;
            }
            continue;
        }

        dfs(x,c);
    }
}


int main(){
flag = 0;
cin>>n>>m;
for(int i=0;i<m;i++){
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
for(int i=1;i<=n;i++){
    if(colored[i])continue;
    dfs(i,1);
}
if(flag){
    cout<<"IMPOSSIBLE";
    return 0;
}
for(int i=1;i<=n;i++){
    cout<<colored[i]<<" ";
}
return 0;
}
