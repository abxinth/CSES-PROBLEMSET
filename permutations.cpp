#include<iostream>
#include<vector>
#include<bits/stdc++.h>

int main(){
int n;
std::cin>>n;
if(n==1){
    std::cout<<1;
    return 0;
}
if(n==2 || n== 3){
    std::cout<<"NO SOLUTION";
    return 0;
}
if(n%2==0){
    for(int i=2;i<n+1;i+=2){
        std::cout<<i<<" ";
    }
    for(int i=1;i<n;i+=2){
        std::cout<<i<<" ";
    }

}else{
    for(int i=n-1;i>0;i-=2){
        std::cout<<i<<" ";
    }

    for(int i=n;i>0;i-=2){
        std::cout<<i<<" ";
    }
}

return 0;
}
