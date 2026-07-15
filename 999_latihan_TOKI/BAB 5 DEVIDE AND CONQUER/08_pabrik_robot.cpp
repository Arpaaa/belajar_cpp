#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, k;
vector<int> waktu;

bool bisa(int t) {
    int total_robot = 0;
    for (int i=0; i<n; i++) {
        total_robot += t / waktu[i];
    }
    return total_robot >= k;
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    waktu.resize(n);
    for (int i=0; i<n; i++) cin >> waktu[i];

    int low = 1;
    int high = (*min_element(waktu.begin(), waktu.end())) * k;
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (bisa(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << '\n';
}