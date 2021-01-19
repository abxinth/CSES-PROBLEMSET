#include<iostream>


using namespace std;
int main(){
	int n;
	cin>>n;
	int x = 1<<n-1;
	int end = 1<<n;
	
	
	int z;
	int p,q;
	for(int i=0;i<end;i++){
		z = x;
		if(z&i){
			cout<<1;
		}else{
			cout<<0;
		}	
		while(z>1){
			p = i&z;
			q = i&(z>>1);
			if(p&&q){
				cout<<0;
			}else if(!(p) && !(q)){
				cout<<0;
			}else{
				cout<<1;
			}
			z=z>>1;
		}
		cout<<"\n";
		
	}
	
	return 0;
}
