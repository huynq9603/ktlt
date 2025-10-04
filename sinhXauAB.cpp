#include<bits/stdc++.h>
using namespace std;
int n,ok;
char a[101];
void input(){
	cin>>n;
	memset(a,'A',sizeof(a));
	ok =1;
}
void output(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]=='B'){
		a[i] = 'A';
		i--;
	}
	if(i==0) ok=0;
	else a[i] = 'B';
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