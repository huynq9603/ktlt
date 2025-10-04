#include<bits/stdc++.h>
using namespace std;
string chuoiTroNenTuyetVoi(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(st.top()== char(s[i]+32)||st.top()== char(s[i]-32))
            st.pop();
        else st.push(s[i]);
    }
    string result = "";
    while(!st.empty()){
        result =  st.top() + result;
        st.pop();
    }
    return result;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<chuoiTroNenTuyetVoi(s)<<endl;
    }
}