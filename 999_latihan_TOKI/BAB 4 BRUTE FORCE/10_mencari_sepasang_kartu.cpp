#include <bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<n;i++)
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int a[n];
    loop { cin >> a[i]; }
    int cpair = 0;
    loop {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) cpair++;
        }
    }
    cout << cpair << '\n';
}