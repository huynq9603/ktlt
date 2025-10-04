#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int V,E;
        cin>>V>>E;
        vector<vector<int>> a(V+1,vector<int>(V+1));
        for(int i = 0;i<E;i++){
            int u,v;
            cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        int dem = 0;
        vector<bool> xet(V+1,false);
        for(int i = 1;i<=V;i++){
            if(xet[i]==false){
                dem++;
                xet[i] = true;
                for(int j =0;j<a[i].size();j++) xet[j] = true;
            }
        }
        cout<<dem<<endl;
    }
}