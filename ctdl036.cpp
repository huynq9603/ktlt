#include<bits/stdc++.h>
using namespace std;
bool ctdl036(vector<pair<int,int>> v,int N){
    bool a[1000001];
    for(int i=1;i<=1000000;i++) a[i] = true;
    for(int i=0;i<N-1;i++){
        int x = v[i].first;
        int y = v[i].second;
        if(a[x]==true&&a[y]==true||a[x]==true&&a[y]==false||a[x]==false&&a[y]==true){
            a[x] = false;
            a[y] = false;
        }
        else return false;
    }
    return true;
}
int main(){
    int t;cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<pair<int,int>>v;
        for(int i=0;i<N-1;i++){
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        if(ctdl036(v,N)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
}