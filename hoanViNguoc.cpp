#include<bits/stdc++.h>
using namespace std;
int a[15],n,dem;
bool check[15];
void input(){
	cin>>n;
	memset(a,0,sizeof(a));
	dem=0;
	memset(check,false,sizeof(check));
}
void output(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int i){
	for(int j=n;j>=1;j--){
		if(check[j]==false){
			check[j]= true;
			a[i] = j;
			dem++;
			if(dem==n) output();
			else Try(i+1);
			dem--;
			check[j] = false;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		input();
		Try(1);
		cout<<endl;
	}
}