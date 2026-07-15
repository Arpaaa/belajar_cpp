#include <bits/stdc++.h>
using namespace std;
int n, m, sr, sc;
char grid[25][25];

int solve(int r, int c) {
    if (r < 0 || c < 0 || r >= n || c >= m) return 0;
    if (grid[r][c] == '#') return 0;

    grid[r][c] = '#';
    return (1 + solve(r - 1, c) + solve(r + 1, c) + solve(r, c + 1) + solve(r, c - 1));
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m >> sr >> sc;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> grid[i][j];
        }
    }
    cout << solve(sr, sc) << '\n';
}
