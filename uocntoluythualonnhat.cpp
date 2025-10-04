#include<bits/stdc++.h>
using namespace std;
long long nto(long long n){
    if(n==0||n==1)
        return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
void demSo(long long n){
    long long dem[100001]={0};
    int k;
    if(nto(n)==1)
        cout<<n<<" "<<1<<endl;
    else{
    for(int i =2; i<=sqrt(n);i++){
        k=i;
        if(n%i==0){
            while(n%i==0){
                dem[i]++;
                n/=i;
            }
        }
    }
    if(n!=1){
        dem[n]++;
    }
    int max = dem[2];
    for(int i=3;i<=k;i++){
        if(max<dem[i])
        max = dem[i];
    }
   for(int i=2;i<=k;i++){
        if(dem[i]==max){
        cout<<i<<" "<<dem[i]<<endl;
        break;}
    }}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
       demSo(n);
    }
}