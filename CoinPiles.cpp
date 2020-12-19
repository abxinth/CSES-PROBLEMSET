#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main(){
long t,a,b,c,d;
cin>>t;
vector<array<long,2>> v;
for(int i=0;i<t;i++){
    cin>>a>>b;
    v.push_back({a,b});
}

for(int i=0;i<t;i++){
    a = v[i][0]%3;
    b = v[i][1]%3;
    c = v[i][0];
    d = v[i][1];
    if(c>2*d || d>2*c){
        cout<<"NO\n";
        continue;
    }
    if((a==2&&b==1) || (a==1&&b==2) || (a==0&&b==0)){
        cout<<"YES\n";
        continue;
    }
    cout<<"NO\n";
}
return 0;
}
