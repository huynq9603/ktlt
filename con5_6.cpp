#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int longestPalindrome(string s) {
    int maxLength = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(s, i, j)) {
                int len = j - i + 1;
                if (len > maxLength)
                    maxLength = len;
            }
        }
    }
    return maxLength;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;
        cout << longestPalindrome(S) << endl;
    }

    return 0;
}