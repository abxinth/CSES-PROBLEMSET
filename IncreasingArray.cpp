#include<iostream>



int main(){
long arr[200001];
int n;
std::cin>>n;
for(int i=0;i<n;i++){
std::cin>>arr[i];
}
long sum = 0;

for(int i=1;i<n;i++){

     if(arr[i-1] > arr[i]){
        sum+=arr[i-1] - arr[i];
        arr[i] = arr[i-1];
     }
}



std::cout<<sum;
return 0;
}
