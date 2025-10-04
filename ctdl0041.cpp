#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int  V,E;
		cin>>V>>E;
		vector< vector<int>> danhSachKe(V+1);
		for(int i=1;i<=E;i++){
			int u,v;
			cin>>u>>v;
			danhSachKe[u].push_back(v);
			danhSachKe[v].push_back(u);
		}
		for(int i=1;i<=V;i++){
			cout<<"D"<<i<<": ";
			for(int j=0;j<danhSachKe[i].size();j++) cout<<danhSachKe[i][j]<<" ";
			cout<<endl;
		}
	}
}
