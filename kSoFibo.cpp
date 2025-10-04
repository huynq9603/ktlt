#include<bits/stdc++.h>
using namespace std;
int fibo(int k){
    if(k==0)
        return 0;
    long long  f0=1;
    long long f1 =1;
    for(int i=2;i<=k;i++){
        int fibo1 = f1;
        f1=f0+f1;
        f0= fibo1;
    }
    return f1;
}
long long demSo(int n,int k){
    long long dp[n+1][k+1];
    memset(dp,0,sizeof(dp));
    dp[0][0] =1;
    int i=1;
    int x = fibo(i);
    while(x<=n){
        for(int j=x;j<=n;j++){
            for(int K=1;K<=k;K++){
                dp[j][K]+=dp[j-x][K-1];
            }
        }
        i++;
        x = fibo(i);
        
    }
    return dp[n][k];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<demSo(n,k)<<endl;
    }
}