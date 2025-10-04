#include <bits/stdc++.h>
using namespace std;
void khoangCachHoanVi(int n,vector<int> a,vector<int> b){
	int count =0;
	while(next_permutation(a.begin(),a.end())){
		
		count++;
		int countB = 0;
		for(int i=0;i<n;i++){
			if(b[i]==a[i]) countB++;
		}
		if(countB==n){
			cout<<count<<endl;
			break;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		vector<int> b(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		khoangCachHoanVi(n,a,b);
	}
}