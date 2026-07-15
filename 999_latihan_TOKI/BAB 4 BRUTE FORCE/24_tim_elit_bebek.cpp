#include <bits/stdc++.h>
using namespace std;
int n, k, m;
vector<pair<int, int> > b(25);

int solve(int i, int p, int tw, int sk) {
    if (tw > m) return -1e9;  // Pruning
    if (sk == 0) return p;    // Base Case hanya kembalikan jika sk sudah habis
    if (i == n) return -1e9;  // Jika sk belum habis tapi n sudah habis

    // if (i == n) {
    //     if (sk == 0 && tw <= m) return p;
    //     return 0;
    // }

    int op1 = solve(i + 1, p + b[i].first, tw + b[i].second, sk - 1);
    int op2 = solve(i + 1, p, tw, sk);

    return max(op1, op2);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k >> m;
    for (int i = 0; i < n; i++) {
        cin >> b[i].first >> b[i].second;
    }

    // cout << solve(0, 0, 0 , k) << '\n';
    int hasil = solve(0, 0, 0, k);
    cout << (hasil < 0 ? -1 : hasil) << '\n';
}
