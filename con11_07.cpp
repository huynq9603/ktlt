#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL),right(NULL){}
};
void con11_07(TreeNode* root){
	if(!root) return;
	stack<TreeNode*> st;
	st.push(root);
	while(!st.empty()){
		TreeNode* current = st.top();
		st.pop();
		cout<<current->val<<" ";
	}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;cin>>N;
        unordered_map<int,TreeNode*> nodes;
        TreeNode* root = NULL;
        for(int i = 0;i<N;i++){
            int u,v;
            cin>>u>>v;
            char x;cin>>x;
            if(nodes.find(u)==nodes.end()){
                nodes[u] = new TreeNode(u);
                if(!root) root = nodes[u];
            }
            if(nodes.find(v) == nodes.end()){
                nodes[v] = new TreeNode(v);
            }
            if(x == 'L'){
                nodes[u]->left = nodes[v];
            }
            else{
                nodes[u]->right = nodes[v];
            }
        }
	}
}