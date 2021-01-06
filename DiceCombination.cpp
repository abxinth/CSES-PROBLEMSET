#include<iostream>
#define MOD 1000000007
using namespace std;
long val[1000001];
bool is_val[1000001];
long solve(long x){
    long result = 0;
    if(x<0){
        return 0;
    }
    if(x==0){
        return 1;
    }
    if(is_val[x]){
        return val[x];
    }
    result = solve(x-6) + solve(x-5) + solve(x-4) + solve(x-3) + solve(x-2) + solve(x-1);
    result = result%MOD;
    is_val[x] = true;
    val[x] = result;
    return result;
}

int main(){

long n;
cin>>n;
cout<<solve(n);
}
