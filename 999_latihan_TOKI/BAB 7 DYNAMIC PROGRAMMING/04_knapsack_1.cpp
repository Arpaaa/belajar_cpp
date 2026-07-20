#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<vector<int>> dp;
vector<int> prices, weights;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k; 
    prices.resize(n+1); weights.resize(n + 1);
    dp.assign(n + 1, vector<int>(k + 1, 0));
    for (int i=1; i<=n; i++) cin >> weights[i] >> prices[i];

    for (int i=1; i<=n; i++) {
        for (int j=0; j<=k; j++) {
            dp[i][j] = dp[i-1][j];

            if (weights[i] <= j) {
                dp[i][j] = max(dp[i][j], prices[i] + dp[i-1][j - weights[i]]);
            } 
        }
    }

    cout << dp[n][k] << '\n';
}