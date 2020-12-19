#include<iostream>
using namespace std;
int main(){

    long long n;
    cin>>n;
    for(long long i =1;i <= n;i++){
    long long total_position = (i*i)*(i*i-1)/2;
    long long attackPositions = 4*(i-1)*(i-2);
    std::cout<<total_position - attackPositions<<"\n";
    }

return 0;
}
