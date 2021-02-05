#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define MOD 1000000007

ll power(ll x,ll y){
    ll r = 1;
    if(y == 0){
        return 1;
    }
    if(y%2 == 0){
        r = power(x,y/2);
        r = (r*r)%MOD;
    }else{
        r = (x*power(x, y-1))%MOD;
    }
    return r;
}

int main(){
ll n;
cin>>n;
ll nos[200001][2];
for(ll i=0;i<n;i++){
    cin>>nos[i][0]>>nos[i][1];
}
for(ll i=0;i<n;i++){
    if(nos[i][1] == 0){
        cout<<1<<"\n";
        continue;
    }
    if(nos[i][0] == 0){
        cout<<0<<"\n";
        continue;
    }
    cout<<power(nos[i][0], nos[i][1])<<"\n";
}
return 0;
}
