#include<bits/stdc++.h>
using namespace  std;
int N;
int a[100];
bool chuaXet[100];
void input(){
	cin>>N;
	memset(chuaXet,true,sizeof(chuaXet));
}
void  output(){
	for(int i=N;i>=1;i--){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int i){
	for(int j=N;j>=1;j--){
		if(chuaXet[j]==true){
			chuaXet[j] = false;
			a[i] = j;
			if(i==1) output();
			else Try(i-1);
			chuaXet[j] =  true;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		input();
		Try(N);
		cout<<endl;
	}
}