#include<iostream>



int main(){

long n;
std::cin>>n;


/////5 calculator
int fives = 0;
int div_5 = 1;
while((int)n/div_5 != 0){
    div_5 *= 5;
    fives += (int)n/div_5;
}
std::cout<<fives;
/////2 calculator

return 0;
}
