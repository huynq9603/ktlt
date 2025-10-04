#include <bits/stdc++.h>

const int MOD=1e9+7;

using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--){
        int n, k, dp[100005]={};
          cin >> n >> k;
          dp[0]=1;
          dp[1]=1;
          for(int i = 2;i<=k;i++){
            for(int j = 1;j<=min(k,i);j++) dp[i]=(dp[i]+dp[i-j])%MOD;
          }
          int tmp=0;
          for(int i =1;i<=k;i++) tmp=(tmp+dp[i])%MOD;
          for(int i =k+1;i<=n;i++){
            dp[i]=tmp;
            tmp=((tmp-dp[i-k]+MOD)%MOD+dp[i])%MOD;
          }
          cout<<dp[n]<<'\n';
    }

   return 0;
}