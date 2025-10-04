#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int con5_5(int N,int K){
    vector<vector<int>> dp(N+1,vector<int>(K+1,0));
    for(int i = 0;i<=N;i++) dp[i][0] = 1;
    for(int i = 1;i<=N;i++){
        for(int j = 1;j<=min(i,K);j++){
            int sum = ((dp[i-1][j-1]%MOD)+(dp[i-1][j]%MOD))%MOD;
            dp[i][j] = (dp[i][j]+sum)%MOD;
        }
    }
    return dp[N][K];
}
int main(){
    int t;cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        cout<<con5_5(N,K)<<endl;
    }
}