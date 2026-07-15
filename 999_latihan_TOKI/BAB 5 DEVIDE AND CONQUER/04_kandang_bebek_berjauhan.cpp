#include <bits/stdc++.h>
using namespace std;

int n,c;
vector<int> x;

bool bisa(int jarak) {
    int b_terpasang = 1;
    int last_pos = x[0];

    for (int i=1; i<n; i++) {
        if (x[i] - last_pos >= jarak) {
            b_terpasang++; last_pos = x[i];
        }
    }

    return b_terpasang >= c;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> c;
    x.resize(n);
    for (int i=0; i<n ;i++) cin >> x[i];
    sort(x.begin(), x.end());

    int low = x[0];
    int high = x[n-1] - x[0];
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low ) / 2;
        if (bisa(mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << '\n';
}