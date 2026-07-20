#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> memo, coins;

int solve(int t) {
    memo[0] = 0;

    for (int i=1; i<=t; i++) {
        int best = 1e9;
        for (int j=0; j<n; j++) {
            if (coins[j] <= i) {
                best = min(best, memo[i - coins[j]] + 1);
            }
        }
        memo[i] = best;
    }

    return memo[t];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k; 
    coins.resize(n); memo.resize(k + 1);
    
    for (int i=0; i<n; i++) cin >> coins[i];
    cout << solve(k) << '\n';
}