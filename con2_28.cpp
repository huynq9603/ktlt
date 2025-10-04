#include<bits/stdc++.h>
using namespace std;
void con2_28(vector<int> &v,int X,int N,int start,vector<vector<int> >&A, vector<int> &a){
    if(X==0){
        A.push_back(a);
        return;
    }
    if(X<0) return;
    for(int i = start;i<N;i++){
        a.push_back(v[i]);
        con2_28(v,X-v[i],N,i,A,a);
        a.pop_back();
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int N,X;
        cin>>N>>X;
        vector<int> v(N);
        for(int i = 0;i<N;i++) cin>>v[i];
        sort(v.begin(),v.end());
        vector<vector<int> >A;
        vector<int> a;
        con2_28(v,X,N,0,A,a);
        if(A.size()==0) cout<<"-1";
        for(int i = 0;i<A.size();i++){
            cout<<"[";
            for(int j = 0;j<A[i].size()-1;j++) cout<<A[i][j]<<" ";
            cout<<A[i][A[i].size()-1]<<"] ";
        }
        cout<<endl;
    }
}