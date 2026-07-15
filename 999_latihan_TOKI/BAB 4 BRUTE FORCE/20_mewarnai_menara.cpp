#include <bits/stdc++.h>
using namespace std;
int n,k;
int e[20][3];

int solve(int i, int last_c, int sisa_k) {
    if (sisa_k < 0) return -1e9;
    if (i == n) return 0;

    int nilai_max = -1e9;
    for (int j=0; j<3; j++) {
        if (j == last_c) continue;
        int next_k = sisa_k;
        if (j == 0) next_k--;
        int sum = e[i][j] + solve(i + 1, j, next_k);
        nilai_max = max(sum, nilai_max);
    }
    return nilai_max;
}

int main() {
    cin >>n>>k;
    for (int i=0; i<n; i++) {
        cin >> e[i][0] >> e[i][1] >> e[i][2];
    }
    int hasil = solve(0, -1, k);
    if (hasil < 0) cout << -1 << '\n';
    else cout << hasil << '\n';
}