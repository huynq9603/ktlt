#include<bits/stdc++.h>
using namespace std;
string  con7_11(string s){
    stack<char> st;
    string result = "";
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z') result+=s[i];
        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/') st.push(s[i]);
        else if(s[i]=='(') st.push(s[i]);
        else{
            while(st.top()!='('){
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
    }
    while(!st.empty()){
    	result+=st.top(); st.pop();
	}
    return result;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        cout<<con7_11(s)<<endl;
    }
}