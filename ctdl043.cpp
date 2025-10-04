#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int N;cin>>N;
        vector<int> S(N);
        vector<int> F(N);
        for(int i = 0;i<N;i++) cin>>S[i];
        for(int i = 0;i<N;i++) cin>>F[i];
        for(int i = 0 ;i<N-1;i++){
            int index = i;
            for(int j = i+1;j<N;j++){
                if(S[j]<S[index]){
                    index = j;
                }
            }
            if(index!=i){
                int swap = S[i];
                S[i] = S[index];
                S[index] = swap;
                int swapp = F[i];
                F[i] = F[index];
                F[index] = swapp;
            }
        }
        vector<int> dp(N,1);
        for(int i = 0;i<N-1;i++){
            for(int j = i+1;j<N;j++){
                if(F[i]<=S[j]) dp[j] = max(dp[j],dp[i]+1);
            }
        }
        int maximum = dp[0];
        for(int i = 1;i<N;i++){
            maximum = max(maximum,dp[i]);
        }
        cout<<maximum<<endl;
    }
}
