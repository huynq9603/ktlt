#include<bits/stdc++.h>
using namespace std;
void con2_24(int N,int S,int index,vector<int> &v, vector<vector<int>> &V,vector<int> &result){
	if( S==0){
		V.push_back(result);
		return;
	}
	if(index>=N||S<0) return;
	for(int i = index ; i< v.size();i++){
		result.push_back(v[i]);
		con2_24(N,S-v[i],i+1,v,V,result);
		result.pop_back();
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int N,S;
		cin>>N>>S;
		vector<int> v(N);
		for(int i=0;i<N;i++) cin>>v[i];
		sort(v.begin(),v.end());
		vector<vector<int>> V;
		vector<int> result;
		con2_24(N,S,0,v,V,result);
		if(V.size()==0) cout<<"-1"<<endl;
		for(int i = 0;i<V.size();i++){
			cout<<"[";
			for(int j = 0;j<V[i].size()-1;j++) cout<<V[i][j]<<" ";
			cout<<V[i][V[i].size()-1]<<"] ";
		}
		cout<<endl;
	}
}