#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> coins;

int solve(int t) {
    if (t == 0) return 0;
    int best = 1e9;
    for (int i=0; i<n; i++) {
        if (coins[i] <= t) {
            best = min(best, solve(t - coins[i]) + 1);
        }
    }

    return best;
}

int main() {
    cin >> n >> k;
    coins.resize(n);
    for (int i=0; i<n; i++) cin >> coins[i];
    cout << solve(k) << '\n';
}