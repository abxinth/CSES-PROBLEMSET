#include<iostream>
#include<vector>
using namespace std;

int link[100001];
int sizel[100001];

int findU(int x){
    while(link[x] != x)x=link[x];
    return x;
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        link[i] = i;
        sizel[i] = 1;
    }
    int a,b,h1,h2;
    pair<int,int> mx;
    mx.first = 1;
    mx.second = 1;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        h1 = findU(a);
        h2 = findU(b);
        if(h1 == h2)continue;
        if(sizel[h1] < sizel[h2])swap(h1,h2);
        sizel[h1] += sizel[h2];
        link[h2] = h1;
        if(sizel[h1]>mx.first){
            mx.first = sizel[h1];
            mx.second = h1;
        }
    }


    vector<pair<int,int>> r;
    h1 = findU(mx.second);
    for(int i=1;i<=n;i++){
        h2 = findU(i);
        if(h1==h2)continue;
        sizel[h1] += sizel[h2];
        link[h2] = h1;
        r.push_back({h1,i});
    }



    std::cout<<r.size()<<"\n";
    for(auto x:r){
        std::cout<<x.first<<" "<<x.second<<"\n";
    }

}
