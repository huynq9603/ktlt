#include<bits/stdc++.h>
using namespace std;
string demChuSo(long long n){
    string result = to_string(n);
    return result;
}
int tichChuSo(long long n){
	int tich =1;
	while(n>0){
		int d = n%10;
		tich*=d;
		n/=10;
	}
	return tich;
}
long long tichSoLonNhat(long long n){
    int maximum = tichChuSo(n);
    string soMoi = demChuSo(n);
    int i = soMoi.size()-1;
    while(i>=1){
    	if(soMoi[i]<char(9+'0')){
    		soMoi[i-1]-=1;
    		soMoi[i] = 9+'0';
    		long long soMoi1 =stoll(soMoi);
    		int tich = tichChuSo(soMoi1);
    		if(maximum<tich) maximum = tich;
		}
		i--;
	}
	return maximum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<tichSoLonNhat(n)<<endl;
	}
}