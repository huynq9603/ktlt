#include<bits/stdc++.h>
using namespace std;
string prefix_to_postfix(string s){
    string result = "";
    stack <string> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='/'||s[i]=='*'||s[i]=='+'||s[i]=='-'){
        	string x = st.top();
        	st.pop();
        	string y = st.top();
        	st.pop();
        	st.push(s[i]+y+x);
        }
        else{
            st.push(string(1,s[i]));
        }
    }
    result = st.top();
    return result;
}
int main(){
	int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<prefix_to_postfix(s)<<endl;
    }
}