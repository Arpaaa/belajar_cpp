#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> a;
int n,k;
int kmax = 0;
int solve(int i, int u, int k) {
    if (i >= n || u <= 0) {
        kmax = max(kmax, k);
    } else {
        solve(i+1, u, k);
        if (u >= a[i].first) {
            solve(i+1, u - a[i].first, k + a[i].second);
        }
    }
    return kmax;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    cout << solve(0, k, 0) << '\n';
}