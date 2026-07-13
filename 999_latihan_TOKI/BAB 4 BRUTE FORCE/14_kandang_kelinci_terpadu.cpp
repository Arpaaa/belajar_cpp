#include <bits/stdc++.h>
using namespace std;
int main() {
    int r,c; cin >> r >> c; int k[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> k[i][j];
    }
    int m = 0;
    for (int i = 0; i <= r - 2; i++) {
        int cur = 0;
        for (int j = 0; j <= c - 2; j++) {
            cur = k[i][j] + k[i][j+1] + k[i+1][j] + k[i+1][j+1];
            m = max(cur, m);
        }
    }
    cout << m << '\n';
}