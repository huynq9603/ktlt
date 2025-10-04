#include<bits/stdc++.h>
using namespace std;
int demChuSo(long long n){
    int count = 0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
long long soGiongNhau(long long n, int a, int b){
    if(a>b)
        swap(a,b);
    int dem = demChuSo(n);
   	if(dem%2!=0){
        long long soMoi = 0;
        int count = 0;
        for(int i=1;i<=dem+1;i++){
            if(i<=(dem+1)/2)
                soMoi = soMoi*10 + a;
            else
                soMoi = soMoi*10 + b;
        }
        return soMoi;
    }
    else{
        int luu1[20],luu2[20];
        int i = 0;
        while(n!=0){
            luu1[dem-i-1] = n%10;
            n/=10; 
        }
        
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        int a,b;
        cin>>n;
        cin>>a>>b;
        cout<<soGiongNhau(n,a,b)<<endl;
    }
}