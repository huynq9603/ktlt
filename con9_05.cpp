#include<bits/stdc++.h>
using namespace std;
vector< vector<int>> con9_05(vector<pair<int,int>>& G,int V,int E){
    vector<vector<int>> v(V+1);
    for(int i = 0;i<G.size();i++){
        int x = G[i].first;
        int y = G[i].second;
        v[x].push_back(y);
    }
    return v;
}
int main(){
    int t;cin>>t;
    while(t--){
        int V,E;
        cin>>V>>E;
        vector<pair<int,int>> G;
        for(int i=0;i<E;i++){
            int x,y;
            cin>>x>>y;
            G.push_back(make_pair(x,y));
        }
        vector<vector<int>> v = con9_05(G,V,E);
        for(int i = 1;i<=V;i++){
            cout<<i<<": ";
            for(int j = 0;j<v[i].size();j++) cout<<v[i][j]<<" ";
            cout<<endl;
        }
    }
}