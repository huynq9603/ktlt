#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string result = "";
        result += s[0];
        for(int i = 0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) result = result + "0";
            else result = result + "1";
        }
        cout<<result<<endl;
    }
}