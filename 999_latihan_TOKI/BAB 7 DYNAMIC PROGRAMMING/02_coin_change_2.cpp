#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> coins, memo;
vector<bool> computed;

int solve(int t) {
    if (t == 0) return 0;

    if (computed[t]) {
        return memo[t];
    }

    int best = 1e9;
    for (int i=0; i<n; i++) {
        if (coins[i] <= t) {
            int res = solve(t - coins[i]);
            if (res != 1e9) {
                best = min(best, res + 1);
            }
        }
    }
    computed[t] = true; memo[t] = best;
    return best;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    coins.resize(n); memo.resize(k + 1);
    computed.assign(k + 1, false);
    for (int i=0; i<n; i++) cin >> coins[i];
    cout << solve(k) << '\n';
}