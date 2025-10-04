#include<bits/stdc++.h>
using namespace std;
vector<int> strToVector(string s){
    vector<int> v;
    string result = "";
    for(int i=0;i<s.size();i++){
        if(s[i]!=',') result+=s[i];
        else{
            int x = stoi(result);
            v.push_back(x);
            result = "";
        }
    }
    int x = stoi(result);
            v.push_back(x);
    return v;
}
vector<string> buildArray(vector<int> &target,int n){
    vector<string> v;
    int i=1;
    int dem = 0;
    while(i<=n){
       	if(i==target[dem]){
            v.push_back("Push");
            dem++;
        }
        else{
            v.push_back("Push");
            v.push_back("Pop");
        }
        i++;
        if(dem==target.size()) return v;
    }
}
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        int n;
        cin>>s>>n;
        vector<int> v = strToVector(s);
        vector<string> x = buildArray(v,n);
        for(int i=0;i<x.size()-1;i++) cout<<x[i]<<",";
        cout<<x[x.size()-1];
        cout<<endl;
    }
}
