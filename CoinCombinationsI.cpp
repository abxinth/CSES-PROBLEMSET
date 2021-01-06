#include<iostream>
#include<vector>
#define MOD 1000000007
using namespace std;
vector<long> coins;

long val[1000001];
bool is_val[1000001];

long solve(long x){
    long result = 0;
    if(x==0){
        return 1;
    }
    if(x<0){
        return 0;
    }
    if(is_val[x]){
        return val[x];
    }
    for(long i=0;i<coins.size();i++){
        result+=solve(x-coins[i]);
    }
    result = result%MOD;
    is_val[x] = true;
    val[x] = result;
    return result;
}

int main(){
long n,x,c;
cin>>n>>x;
for(long i=0;i<n;i++){
    cin>>c;
    coins.push_back(c);
}

cout<<solve(x);
return 0;
}
