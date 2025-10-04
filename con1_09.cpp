#include<bits/stdc++.h>
using namespace std;
vector<int> decimal_to_binary(int N,int x){
    vector<int> v(N);
    N--;
    while(x>0){
        v[N] = x%2;
        N--;
        x/=2;
    }
    return v;
}
vector<int> binary_to_gray(vector<int> v){
    vector<int> x;
    x.push_back(v[0]);
    for(int i = 1;i< v.size();i++){
        if(v[i]==v[i-1]) x.push_back(0);
        else x.push_back(1);
    }
    return x;
}
int main(){
    int t;cin>>t;
    while(t--){
        int N;
        cin>>N;
        for(int i = 0;i<= pow(2,N)-1;i++){
            vector<int> v = decimal_to_binary(N,i);
            vector<int> x = binary_to_gray(v);
            for(int i = 0;i<x.size();i++) cout<<x[i];
            cout<<" ";
        }
        cout<<endl;
    }
}