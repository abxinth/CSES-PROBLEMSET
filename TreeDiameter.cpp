#include<iostream>
#include<vector>
using namespace std;

vector<long long> adj[200001];

pair<long long,long long>maxx;
pair<long long,long long>maxxx;

long long d1[200001];
long long d2[200001];

void dfs(long long s,long long e){
    d1[s] = d1[e]+1;
    if(d1[s] > maxx.first){
        maxx.first = d1[s];
        maxx.second = s;
    }
    for(auto c : adj[s]){
        if(c==e)continue;
        dfs(c,s);
    }
}
void dfs2(long long s,long long e){
    d2[s] = d2[e]+1;
    if(d2[s] > maxxx.first){
        maxxx.first = d2[s];
        maxxx.second = s;
    }
    for(auto c : adj[s]){
        if(c==e)continue;
        dfs2(c,s);
    }
}
int main(){
int n,m,a,b;
cin>>n;
for(int i=0;i<n-1;i++){
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
///////////////////////////////
d1[0] = -1;
d1[1] = 0;
maxx.first = 0;
maxx.second = 1;
dfs(1,0);
int m_d = maxx.first;
int m_n = maxx.second;
//cout<<m_d<<" "<<m_n;
////////////////////////////////
d2[0] = -1;
d2[m_n] = 0;
maxxx.first = 0;
maxxx.second = m_n;
dfs2(m_n,0);
////////////////////////////////
cout<<maxxx.first;
return 0;
}
