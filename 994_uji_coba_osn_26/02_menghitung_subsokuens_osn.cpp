#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    string s; cin >> s;

    ll count_o = 0, count_os = 0, count_osn = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == 'O') count_o++;
        else if (s[i] == 'S') count_os += count_o;
        else if (s[i] == 'N') count_osn += count_os;
    }

    cout << count_osn << '\n';
}