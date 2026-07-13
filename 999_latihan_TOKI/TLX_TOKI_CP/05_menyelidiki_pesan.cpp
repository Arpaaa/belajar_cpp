#include <iostream>
#include <string>
using namespace std;

int n, cnt;
string a, b, c;
char to[256], fr[256], ma, mb;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >>n >> a >> b >> c;

    for (int i=0; i<n; i++) {
        if ((to[a[i]] && to[a[i]] != b[i]) || (fr[b[i]] && to[b[i]] != a[i]))
            return cout << "Pak Dengklek bingung", 0;
        to[a[i]] = b[i];
        fr[b[i]] = a[i];
    }

    for (char i = 'A'; i <= 'Z'; i++) {
        if (to[i]) cnt++; else ma = i;
        if (!fr[i]) mb = i;
    }

    if (cnt == 25) fr[mb] = ma;

    for (auto ch : c) cout << (fr[ch] ? fr[ch] : '?' );
    cout << '\n';
}