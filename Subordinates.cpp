#include<iostream>
#include<vector>
using namespace  std;
long long d[200001];
vector<long long> adj[200001];

void dfs(long long s,long long e){
    d[s] = 1;
    for(auto c : adj[s]){
        if(c==e)continue;
        dfs(c,s);
        d[s] += d[c];
    }
}

int main(){
long long n;
cin>>n;
long long a;
for(long long i=2;i<=n;i++){
    cin>>a;
    adj[a].push_back(i);
}
dfs(1,0);
for(int i=1;i<=n;i++){
    cout<<d[i]-1<<" ";
}

}
