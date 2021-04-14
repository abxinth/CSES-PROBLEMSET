#include<iostream>
#include<vector>
using namespace std;
#define MAX 1844674407370955161

unsigned long long distances[501][501];

int main(){
unsigned long long n,m,q;
cin>>n>>m>>q;
for(unsigned long long i=1;i<=n;i++){
    for(unsigned long long j=1;j<=n;j++){
        if(i!=j){
            distances[i][j] = MAX;
        }else{
            distances[i][j] = 0;
        }
    }
}



unsigned long long a,b,c;
for(unsigned long long i=0;i<m;i++){
    cin>>a>>b>>c;
    if(distances[a][b] > c){
    distances[a][b] = c;
    distances[b][a] = c;
    }
}



for(unsigned long long k=1;k<=n;k++){
    for(unsigned long long i=1;i<=n;i++){
        for(unsigned long long j=1;j<=n;j++){
            distances[i][j] = min(distances[i][j],distances[i][k]+distances[k][j]);
        }
    }
}
vector<pair<unsigned long long,unsigned long long>> queries;
for(unsigned long long i=0;i<q;i++){
    cin>>a>>b;
    queries.push_back({a,b});
}


for(auto c:queries){
    if(distances[c.first][c.second] < MAX){
        cout<<distances[c.first][c.second]<<"\n";
    }else{
        cout<<-1<<"\n";
    }
}

return 0;
}
