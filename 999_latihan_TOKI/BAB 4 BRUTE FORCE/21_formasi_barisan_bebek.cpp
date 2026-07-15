#include <bits/stdc++.h>
using namespace std;
int n,p;
bool musuh[15][15];
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> p;
    int b[n];
    for (int i=0; i<n; i++) b[i] = i+1;

    for (int i=0; i<p; i++) {
        int x, y; cin >> x >> y;
        musuh[x][y] = true;
        musuh[y][x] = true;
    }

    int cnt = 0;
    do {
        bool bersebelahan = false;
        for (int i=0; i<n-1; i++) {
            if (musuh[b[i]][b[i+1]]) {
                bersebelahan = true; break;
            }
        }
        if (!bersebelahan) cnt++;
    } while (next_permutation(b, b+n));
    cout << cnt << '\n';
}