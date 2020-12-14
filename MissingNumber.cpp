#include<iostream>


int main(){
    int x[200001];
    long n;
    long long sum=0;
    long long ans;
    std::cin>>n;
    ans = (n*(n+1))/2;
    for(long i=0;i<n-1;i++){
        std::cin>>x[i];
    }
    for(long i=0;i<n-1;i++){
        sum+=x[i];
    }
    std::cout<<ans-sum;

    return 0;
}
