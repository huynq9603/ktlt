#include <iostream>
#include <string>
using namespace std;

string nhan(string num1, string num2) {
    long long len1 = num1.size();
    long long len2 = num2.size();

    if (len1 == 0 || len2 == 0) {
        return "0";
    }

    string result(len1 + len2, '0');

    for (long long i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        int digit1 = num1[i] - '0';

        for (long long j = len2 - 1; j >= 0; j--) {
            int digit2 = num2[j] - '0';
            int product = digit1 * digit2 + (result[i + j + 1] - '0') + carry;
            carry = product / 10;
            result[i + j + 1] = (product % 10) + '0';
        }
        result[i] = (result[i] - '0' + carry) + '0';
    }
     result.erase(0, min(result.find_first_not_of('0'), result.size()-1));
    return result;
}


string power(string a, int n) {
    if (n == 1)
        return a;

    if (n % 2 == 0) {
        string half_power = power(a, n / 2);
        return nhan(half_power,half_power);
    } else {
        string half_power = power(a, n / 2);
        string powerr = nhan(half_power, half_power);
        return nhan(powerr, a);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,n;
        cin >> a >> n;
        if(n==0){
        	cout<<1<<endl;
		}
        else{
        string A = to_string(a);
        cout << power(A, n) << endl;}
    }
    return 0;
}