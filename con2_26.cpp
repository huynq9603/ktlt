#include<bits/stdc++.h>
using namespace std;
string con2_26(int K,string s){
    for(int i = 0;i<s.size();i++){
        char c = i;
        for(int j = i;j<s.size();j++){
            if(s[c] < s[j]) c = j;
        }
        if(c!=i){
            char swap = s[i];
            s[i] = s[c];
            s[c] = swap;
            K--;
        }
        if(K==0) break;
     }
    return s;
}
int main(){
    int t;cin>>t;
    while(t--){
        int K;
        cin>>K;
        string s;
        cin>>s;
        if(s.size()<1) cout<<s
        cout<<con2_26(K,s)<<endl;
	}
}