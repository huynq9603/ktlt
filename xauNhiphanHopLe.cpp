#include<bits/stdc++.h>
using namespace std;
string s;
int a[1001];
int ok;
int n;
void input(){
	cin>>s;
	ok = 1;
	memset(a,0,sizeof(a));
}
void output(){
	int dem = 1;
	for(int i =0;i<s.size();i++){
		if(s[i]=='?'){
			cout<<a[dem];
			dem++;
		}
		else if(s[i]==' ') continue;
		else cout<<s[i];
	}
	cout<<endl;
}
void check(){
	int count =0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='?') count++;
	}
	n = count;
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
	int t;
	cin>>t;
	while(t--){
		input();
		check();
		while(ok){
			output();
			sinh();
		}
	}
}