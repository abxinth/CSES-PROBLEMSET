#include<iostream>


int main(){
long result = 1;
long n;
std::cin>>n;

for(int i=0;i<n;i++){
    result = (result*2)%1000000007;
}
std::cout<<result;
return 0;
}
