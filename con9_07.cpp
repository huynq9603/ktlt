#include<bits/stdc++.h>
using namespace std;
int n,m,u;
bool visited[1001];
vector<int> adj[1001];
void input(){
	cin>>n>>m>>u;
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		
	}
	memset(visited,0,sizeof(visited));
}
void dfs(int u){
	cout<<u<<" ";
	visited[u]=true;
	for(int x:adj[u]){
		// neu dinh x chua dc tham 
		if(!visited[x]){
			dfs(x);
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		input();
		dfs(u);
		cout<<endl;
	}
}