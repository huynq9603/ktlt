#include<bits/stdc++.h>
using namespace std;

bool nto(int n) {
    if (n == 0 || n == 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void con2_30(int N, int S, int P, vector<vector<int>> &V, vector<int> &v) {
    if (N == 0 && S == 0) {
        V.push_back(v);
        return;
    }
    if (N == 0 || S < 0) return;
    for (int i = P; i <= S; i++) {
        if (nto(i)) {
            v.push_back(i);
            con2_30(N - 1, S - i, i+1, V, v);
            v.pop_back();
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, P, S;
        cin >> N >> P >> S;
        vector<vector<int>> V;
        vector<int> v;
        con2_30(N, S, P, V, v);
        cout<<V.size()<<endl;
        for (int i = 0; i < V.size(); i++) {
            for (int j = 0; j < N; j++) cout << V[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}
