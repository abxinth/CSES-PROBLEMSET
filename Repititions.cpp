#include<iostream>


using namespace std;


int main(){
char x[1000001];
cin>>x;
int max_c=0;
int z=1;
for(int i=0;x[i] != '\0';i++){
    if(x[i] != x[i+1]){
        if(z>max_c){
            max_c = z;
        }
        z = 1;
        continue;
    }
    z++;
}
cout<<max_c;
return 0;
}
