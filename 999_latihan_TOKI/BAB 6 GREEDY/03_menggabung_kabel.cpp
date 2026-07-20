#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
priority_queue<ll, vector<ll>, greater<ll>> c;

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        ll temp; cin >> temp;
        c.push(temp);
    }

    ll w = 0;
    while (c.size() > 1) {
        ll first = c.top(); c.pop();
        ll second = c.top(); c.pop();
        ll gb = first + second;
        w += gb;
        c.push(gb);
    }

    cout << w << '\n';
}