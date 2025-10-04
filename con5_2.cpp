#include<bits/stdc++.h>
using namespace std;
int con5_2(int N,int a[]){
    int L[N];
    for(int i=0;i<N;i++) L[i] = 1;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(a[i]<a[j]) L[j] = max(L[j],L[i]+1);
        }
    }
    int maximum = 0;
    for(int i=0;i<N;i++){
        maximum = max(maximum,L[i]);
    }
    return maximum;
}
int main(){
	int t;cin>>t;
    while(t--){
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++) cin>>a[i];
        cout<<con5_2(N,a)<<endl;
	}
}