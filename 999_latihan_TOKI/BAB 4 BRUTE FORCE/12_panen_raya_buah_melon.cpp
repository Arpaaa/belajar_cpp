#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m; int a[n];
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    int mb = 0;
    for (int i = 0; i <= n - m; i++) {
        int cur = 0;
        for  (int j = i; j <= i + m - 1; j++) {
            cur += a[j];
        }
        mb = max(cur, mb);
    }
    cout << mb << '\n';
}