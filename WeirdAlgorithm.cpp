#include<iostream>


int main(){
long long n;
std::cin>>n;
while(n!=1){
    std::cout<<n<<" ";
    if(n%2==0){
        n=n/2;
    }else{
        n=n*3+1;
    }
}
std::cout<<"1";
return 0;
}
