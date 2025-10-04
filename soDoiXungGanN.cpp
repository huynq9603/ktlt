#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
    string soChuSo = to_string(n);
    int len = soChuSo.length();
    for (int i = 0; i < len / 2; i++) {
        if (soChuSo[i] != soChuSo[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if(check(n)==true)
        cout<<n<<endl;
        else{
        long long soNho = n - 1;
        long long soLon = n + 1;

        while (!check(soNho) && !check(soLon)) {
            soNho--;
            soLon++;
        }
        
        if (check(soNho) &&check(soLon)) {
            cout << soNho << " " << soLon << endl;
        } else if (check(soNho)) {
            cout << soNho << endl;
        } else if (check(soLon)) {
            cout << soLon<< endl;
        }
    }}
    return 0;
}