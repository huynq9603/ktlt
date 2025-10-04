#include<bits/stdc++.h>
using namespace std;
int ctdl046(int N,int S,int M){
	if(N<M) return -1;
    int tongLuongThuc = S*M;
	int count = 1;
	int soDu = N-M;
	S--;
    while(soDu<tongLuongThuc&&S>0){
    	S--;
    	if(count%6!=0){
    		count++;
    		soDu += N-M;
		}
		else{
			//count++;
			soDu += N - 2*M;
			if(soDu<0) return -1;
		}
	}
    return count;
}
int main(){
	int t;cin>>t;
	while(t--){
		int N,S,M;
		cin>>N>>S>>M;
		cout<<ctdl046(N,S,M)<<endl;
	}
}