#include <bits/stdc++.h>
using namespace std;
int n, b[20], total_bobot;

int solve(int i, int count_a, int weight_a) {
    if (i == n) {
        int count_b = n - count_a;
        if (abs(count_a - count_b) <= 1) {
            int weight_b = total_bobot - weight_a;
            return abs(weight_a - weight_b);
        }

        return 1e9;
    }

    int pilih_a = solve(i + 1, count_a + 1, weight_a + b[i]);
    int pilih_b = solve(i + 1, count_a, weight_a);
    return min(pilih_a, pilih_b);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i=0; i<n; i++) cin >> b[i];
    for (int i=0; i<n; i++) total_bobot += b[i];
    cout << solve(0, 0, 0) << '\n';
}