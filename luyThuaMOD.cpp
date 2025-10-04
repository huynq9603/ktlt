#include<iostream>
using namespace std;
#define mod 1000000007
long long tich(long long n, long long m){
    return (n*m)%mod;
}
long long power(long long a,long long k){
    if(k==1)
    	return a;
    if(k%2==0){
    	long long half_power = power(a,k/2);
    	return tich(half_power,half_power);
	}
	else{
		long long half_power = power(a,k/2);
		int power1 = tich(half_power,half_power);
		return tich(power1,a);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,n;
		cin>>a>>n;
		cout<<power(a,n)<<endl;
	}
}