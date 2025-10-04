#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
vector<vector<int>> mulMatrix(vector< vector<int>> a,vector< vector<int>> b){
	int N = a.size();
	vector<vector<int>> c(N,vector<int>(N,0));
    for(int i=0;i<N;i++){
    	for(int j=0;j<N;j++){
    		for(int k=0;k<N;k++){
    			int x = (a[i][k]*1LL*b[k][j])%MOD;
    			c[i][j] = (c[i][j]+x)%MOD;
			}
		}
	}
	return c;
}
vector< vector<int>> power(vector< vector<int>> a,int N){
	if(N==1) return a;
	if(N%2==0){
		vector< vector<int>> half_power = power(a,N/2);
		return mulMatrix(half_power,half_power);
	}
	else{
			vector< vector<int>> half_power = power(a,(N-1)/2);
			vector<vector<int>> powerr = mulMatrix(half_power,half_power);
		    return mulMatrix(powerr,a);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int N,K;
		cin>>N>>K;
		vector< vector<int>>a(N,vector<int>(N));
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++) cin>>a[i][j];
		}
		vector< vector<int>> c = power(a,K);
		int tong = 0;
	/*	for(int i=0;i<N;i++){
			tong = 1LL*(tong+c[i][i])%MOD;
		}
		cout<<tong<<endl;*/
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++) cout<<c[i][j]<<" ";
			cout<<endl;
		}
	}
}