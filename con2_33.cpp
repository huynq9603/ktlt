#include<bits/stdc++.h>
using namespace std;
int N;
int dem;
int X[50];
bool chuaXep[50];
bool cheoXuoi[50];
bool cheoNguoc[50];
void input(){
	cin>>N;
	memset(X,0,sizeof(X));
	memset(chuaXep,false,sizeof(chuaXep));
	memset(cheoXuoi,false,sizeof(cheoXuoi));
	memset(cheoNguoc,false,sizeof(cheoNguoc));
	dem = 0;
}
void Try(int i){
	for(int j = 1;j<=N;j++){
		if(chuaXep[j]==false&&cheoNguoc[i+j-1]==false&&cheoXuoi[i-j+N]==false){
			chuaXep[j] = cheoNguoc[i+j-1] = cheoXuoi[i-j+N] = true;
			X[i] = j;
			if(i == N) dem++;
			else Try(i+1);
			chuaXep[j] = cheoNguoc[i+j-1] = cheoXuoi[i-j+N] = false;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		input();
		Try(1);
		cout<<dem<<endl;
	}
}