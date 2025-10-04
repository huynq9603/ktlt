#include<bits/stdc++.h>
using namespace std;
void con1_07(int N,int jump,vector<vector<int>> &V,vector<int> &v ){
	if(N==0){
		V.push_back(v);
		return;
	}
	if(N<0) return;
	for(int i = jump;i>=1;i--){
		v.push_back(i);
		con1_07(N-i,i,V,v);
		v.pop_back();
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int N;cin>>N;
		vector<vector<int>> V;
		vector<int> v;
		con1_07(N,N,V,v);
		for(int i=0;i<V.size();i++){
			cout<<"(";
			for(int j = 0;j<V[i].size()-1;j++){
				cout<<V[i][j]<<" ";
			}
			cout<<V[i][V[i].size()-1]<<") ";
		}
		cout<<endl;
	}
}