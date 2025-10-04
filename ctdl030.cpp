#include<bits/stdc++.h>
using namespace std;
string soLonNhat(string s,int K){
    for(int i=0;i<s.size()-1;i++){
        char luuKiTu =  s[i];
        int index = i;
        for(int j=i+1;j<s.size();j++){
            if(s[j]>luuKiTu){ 
                luuKiTu = s[j];
                index = j;
            }
		}
        if(index!=i){
            swap(s[i],s[index]);
            K--;
		}
            if(K==0) {
				return s;
        	}
    	
    }
    return s;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        int K;
        cin>>K;
        cin>>s;
        cout<<soLonNhat(s,K)<<endl;
    }
}