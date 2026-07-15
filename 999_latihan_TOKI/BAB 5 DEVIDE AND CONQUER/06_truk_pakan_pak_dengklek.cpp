#include <bits/stdc++.h>
using namespace std;
int n,k;
#define int long long
vector<long long> weights;

bool bisa(long long w) {
    int bobot = weights[0];
    int used_k = 1;
    for (int i = 1; i<n; i++) {
        if (bobot + weights[i] <= w) {
            bobot += weights[i];
        } else {
            used_k++;
            bobot = weights[i];
        }
    }
    return used_k <= k;
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    weights.resize(n);
    for (int i=0; i<n; i++) cin >> weights[i];

    // Bakal ada 1 hingga 3 truk.
    // 1 Truk artinya semua langsung diangkut
    int low = *max_element(weights.begin(), weights.end());
    long long high = accumulate(weights.begin(), weights.end(), 0LL);
    int ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (bisa(mid)) {
            high = mid - 1;
            ans = mid;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << '\n';
}