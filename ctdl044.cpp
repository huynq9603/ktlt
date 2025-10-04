#include<bits/stdc++.h>
using namespace std;
int noiDay(vector<int> &v){
    long long tong = 0;
    while(v.size()!=1){
    sort(v.begin(),v.end());
    int x = v[0]+v[1];
    v.push_back(x);
    tong+=x;
    v.erase(v.begin());
    v.erase(v.begin());}
    return tong;
}
int main(){
    int t;cin>>t;
    while(t--){
        int N;cin>>N;
        vector<int> v(N);
        for(int i=0;i<N;i++)  cin>>v[i];
        cout<<noiDay(v)<<endl;
	}
}