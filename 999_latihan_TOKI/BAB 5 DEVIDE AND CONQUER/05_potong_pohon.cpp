#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> pohon;

bool bisa(int h) {
    long long total_h = 0;
    for (int i=0; i<n; i++) {
        if (pohon[i] <= h) continue;
        total_h += (pohon[i] - h);
    }

    return total_h >= m;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    pohon.resize(n);
    for (int i=0; i<n; i++) cin >> pohon[i];
    sort(pohon.begin(), pohon.end());

    int low = 0;
    int high = pohon[n - 1];
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (bisa(mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << '\n';
}