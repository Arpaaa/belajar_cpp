#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    vector<string> patterns = {
        "OSN", "ONS", "NOS", "NSO", "SNO", "SON"
    };

    vector<int> dp(6, 0);
    int max_len = 0;

    for (char c : s) {
        for (int i = 0; i < 6; i++) {
            int expected_idx = dp[i] % 3;
            if (c == patterns[i][expected_idx]) {
                dp[i]++;
                max_len = max(max_len, dp[i]);
            }
        }
    }

    if (max_len < 3) {
        cout << -1 << "\n";
    } else {
        cout << max_len << "\n";
    }

    return 0;
}