#include <iostream>
using namespace std;

const int MOD = 1000000000;

int countBinaryStrings(int n, int k) {
    // Khởi tạo bảng dp
    int dp[n + 1][2];
    dp[1][0] = dp[1][1] = 1;

    // Tính toán các giá trị của dp từ dp[2] đến dp[n]
    for (int i = 2; i <= n; ++i) {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % MOD;
        dp[i][1] = dp[i - 1][0];
    }

    // Tính tổng các xâu nhị phân thoả mãn yêu cầu
    int total = (dp[n][0] + dp[n][1]) % MOD;

    // Trừ đi số lượng xâu có quá k số 0 hoặc 1 liên tiếp
    /*for (int i = 1; i <= k; ++i) {
        total = (total - dp[n][0] + MOD) % MOD;
    }*/

    return total;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << countBinaryStrings(n, k) << endl;
    }

    return 0;
}