#include<iostream>
#include<vector>
#include<array>
int main(){
long t,x,y;
long z,a;
std::vector<std::array<long,2>> arr;
std::cin>>t;
for(long i=0;i<t;i++){
    std::cin>>y>>x;
    arr.push_back({y,x});
}
for(long i=0;i<t;i++){
    if(arr[i][0] > arr[i][1]){
            a = arr[i][0];

    }else{
            a = arr[i][1];

    }
    z = a*(a-1)+1;
    if(a%2==0){
        //-1
        if(arr[i][0] > arr[i][1]){
            std::cout<<z+(a-arr[i][1])<<"\n";
            continue;
        }
            std::cout<<z-(a-arr[i][0])<<"\n";
            continue;
    }else{
        //+1

        if(arr[i][0] > arr[i][1]){
            std::cout<<z-(a-arr[i][1])<<"\n";
            continue;
        }
        std::cout<<z+(a-arr[i][0])<<"\n";
        continue;
    }

}

return 0;
}
