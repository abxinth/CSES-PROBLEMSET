#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int,int>> v;

int main(){
int n;
cin>>n;
int x;
for(int i=0;i<n;i++){
    cin>>x;
    v.push_back({x,i});
}
sort(v.begin(),v.end());
int rounds = 0;
for(auto itr = v.begin();itr != v.end();itr++){
    auto nxt = itr + 1;

    if(nxt != v.end()){
        if((*nxt).second < (*itr).second){
            rounds++;
        }
    }

}
cout<<rounds+1;
return 0;
}
