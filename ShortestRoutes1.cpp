#define MAX 9000372036854775807
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
/////////////////////////////////
long long d[100001];
bool processed[100001];
priority_queue<pair<long long,long long>> pq;
vector<pair<int,int>> adj[100001];
int n,m,a,b,c;
////////////////////////////////

int main(){
cin>>n>>m;
for(int i=0;i<=n;i++){
    d[i] = MAX;
}
for(int i=0;i<m;i++){
    cin>>a>>b>>c;
    adj[a].push_back({b,c});
}

d[1] = 0;
pq.push({0,1});
while(!pq.empty()){
    int s = pq.top().second;

    pq.pop();
    if(processed[s])continue;
    processed[s] = true;
    for(auto u : adj[s]){
        b = u.first;
        c = u.second;
        if((long long)d[s] + (long long)c < d[b]){
            d[b] = (long long)d[s] + (long long)c;
            pq.push({-d[b],b});

        }
    }
}
for(int i=1;i<=n;i++){
    cout<<d[i]<<" ";
}
return 0;
}
