#include<iostream>
#include<vector>
using namespace std;

#define INF 9999999

vector<long> coins;
long val[1000001];
bool is_val[1000001];
bool f = false;
long solve(long x){
    long result = INF;
    if(x == 0){
        f = true;
        return 0;
    }
    if(x<0){
        return INF;
    }
    if(is_val[x])return val[x];

    for(unsigned long i=0;i<coins.size();i++){
        long temp = solve(x-coins[i]) + 1;
        if(temp<result){
            result = temp;
        }
    }
    is_val[x] = true;
    val[x] = result;

    return result;
}

int main(){

    long n,x,i,c;
    cin>>n>>x;
    for(i=0;i<n;i++){
        cin>>c;
        coins.push_back(c);
    }
    long ans = solve(x);
    if(f){
    cout<<ans;
    return 0;
    }
    cout<<-1;
    return 0;
}
