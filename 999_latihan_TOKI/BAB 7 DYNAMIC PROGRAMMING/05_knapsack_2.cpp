#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> prices, weights;
vector<int> dp;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    prices.resize(n + 1); weights.resize(n + 1);
    dp.assign(k + 1, 0);
    for (int i=1; i<=n; i++) cin >> weights[i] >> prices[i];
    for (int i=1; i<=n; i++) {
        for (int j=k; j>=weights[i]; j--) {
            dp[j] = max(dp[j], prices[i] + dp[j - weights[i]]);
        }
    }

    cout << dp[k] << '\n';
}