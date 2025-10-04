#include<bits/stdc++.h>
using namespace std;
int a[1005];
int N;
void  input(){
    cin>>N;
    for(int  i=0;i<N;i++)  cin>>a[i];
}
void output(){
    for(int i=0;i<N;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void sinh(){
    int i = N-2;
    while(i>=0&&a[i]>=a[i+1]){
        i--;
    }
    if(i==-1)   sort(a,a+N);
    else{
    int  j = N-1;
    while(a[j]<=a[i]){
        j--;
    }
    swap(a[i],a[j]);
    reverse(a+i+1,a+N);}
}
int main(){
	int t;cin>>t;
	while(t--){
		input();
		sinh();
		output();
	}
}