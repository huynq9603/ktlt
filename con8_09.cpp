#include<bits/stdc++.h>
using namespace std;
int con8_9(int S,int T){
    vector< int> v(20001,0);
    queue<int> q;
    q.push(S);
    while(q.front()!=T&&!q.empty()){
        int x = q.front();
        if(v[x-1]==0){
        	q.push(x-1);
        	v[x-1] = v[x]+1;
        }
         if(v[x*2]==0){
            q.push(x*2);
            v[x*2] = v[x] +1;
        }
        q.pop();
    }
    return v[T];
}
int main(){
	int t;cin>>t;
    while(t--){
        int S,T;
		cin>>S>>T;
        cout<<con8_9(S,T)<<endl;
    }
}