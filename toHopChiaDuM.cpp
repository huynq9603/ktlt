#include<bits/stdc++.h>
using namespace std;
long long toHop(int n,int k,int m){
	int c[k+1];
	memset(c,0,sizeof(c));
	c[0] = 1;
	for(int i=1;i<=n;i++){
		for(int j=min(i,k);j>0;j--){
			c[j]+=c[j-1]%m;
			c[j]%=m;
		}
	}
	return c[k]%m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,m;
		cin>>n>>k>>m;
		cout<<toHop(n,k,m)<<endl;
	}
}