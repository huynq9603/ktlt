#include<bits/stdc++.h>
using namespace std; //aggtab       axtxayb
int con5_1(string S1,string S2){
    int N = S1.size();
    int M = S2.size();
    vector< vector<int>> v(N+1,vector<int>(M+1,0));
    //int maximum = 0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            if(S1[i-1]==S2[j-1]) v[i][j] = v[i-1][j-1] +1;
            else v[i][j] = max(v[i][j-1],v[i-1][j]);
        }
    }
    return v[N][M];
}
int main(){
	int t;cin>>t;
    while(t--){
        string S1,S2;
        cin>>S1>>S2;
        cout<<con5_1(S1,S2)<<endl;
    }
}