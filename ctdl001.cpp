#include<bits/stdc++.h>
using namespace std;
int n,a[31],ok;
void input(){
    cin>>n;
    memset(a,0,sizeof(a));
	ok = 1;
}
void output(){
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void sinh(){
	int i = n;
    while(i>=1&&a[i]==1){
    	a[i]=0;
		--i;
	}
	if(i==0) ok=0;
    else a[i] = 1;
}
int main(){
	int t;cin>>t;
	while(t--){
		input();
		while(ok){
			output();
			sinh();
		}
	}
}