#include <bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<n;i++)
int main() {
    int n, m; cin >> n >> m; int a[n];
    loop { cin >> a[i];}
    int cur = 0;
    for (int i = 0; i < m; i++) cur += a[i];
    int mx = cur;
    for (int i = m + 1; i <= n - m; i++) {
        cur += a[i] - a[i - m];
        mx = max(mx, cur);
    }
    cout << mx << '\n';
}