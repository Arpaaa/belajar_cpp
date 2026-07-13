#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> a;
int solve(int index, int uang) {
    if (index >= a.size()) return 0;
    int lewati = solve(index + 1, uang);

    int ambil = 0;
    if (uang >= a[index].first) {
        ambil = a[index].second + solve(index + 1, uang - a[i].first);
    }
    return max(ambil, lewati);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,k; cin >> n >> k;
    a.resize(n);
    for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
    cout << solve(0, k) << '\n';
}