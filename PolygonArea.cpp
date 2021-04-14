#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

long long X[1000];
long long Y[1000];

int main(){
long long n;
cin>>n;
long long a,b;
for(long long i=0;i<n;i++){
    cin>>a>>b;
    X[i] = a;
    Y[i] = b;
}
long long area = 0;
for(long long i=0;i<n-1;i++){
    area += X[i]*Y[i+1];
}
area += X[n-1]*Y[0];
for(long long i=1;i<n;i++){
    area -= X[i]*Y[i-1];
}
area -= X[0]*Y[n-1];
cout<<abs(area);
return 0;
}
