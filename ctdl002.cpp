#include<bits/stdc++.h>
using namespace std;
string s;
void taoChuoi(string &s,int  index){
    if(index == s.size()){
        cout<<s<<endl;
        return;
    }
    if(s[index] =='?'){
        s[index] = '0';
        taoChuoi(s,index+1);
        s[index] = '1';
        taoChuoi(s,index+1);
        s[index] = '?';
    }
    else taoChuoi(s,index+1);
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>s;
        taoChuoi(s,0);
	}
}