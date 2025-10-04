#include<bits/stdc++.h>
using namespace std;
long long  soTien(long long n){
	long long  sum =0;
	
	long long r = n%7;
	long long q = n/7;
	if(q%2==0){
		long long luu = q/2;
		 sum = luu*(q+1)*7;
	}
	else{
		long long luu = (q+1)/2;
		 sum = luu*q*7;
	}
	if(q!=0)
	sum+=(q+1)*r;
	else sum+=r;
	return sum;
}
string money(long long n){
	string result = ".000vnd";
	long long  sum = soTien(n);
	string s =to_string(sum);
	int count = 0;
	for(int i = s.size()-1;i>=0;i--){
		 result = s[i] + result;
		count++;
		if(count==3&&i!=0){
			count = 0;
			result  = '.' +result;
		}
	}
	return result;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		string sum = money(n);
		cout<<sum<<endl;
	}
}