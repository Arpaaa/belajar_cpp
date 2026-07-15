#include <bits/stdc++.h>
using namespace std;
int n, a[25]; long long m;

int solve(int i, long long sum) {
    if (sum > m) return 0;
    if (i >= n) {
        if (sum % 3 == 0 && sum <= m) return 1;
        return 0;
    }
    return (solve(i+1, sum) + solve(i+1, sum + a[i]));
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> a[i];
    cout << solve(0, 0) << '\n';
}