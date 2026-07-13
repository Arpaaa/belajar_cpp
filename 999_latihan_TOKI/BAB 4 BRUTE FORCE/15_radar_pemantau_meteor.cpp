#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    auto met = vector(n, pair(0, 0));
    for (int i = 0; i < n; i++) {
        int f, s; cin >> f >> s; met[i] = make_pair(f, s);
    }
    int minval = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int jarak = abs(met[i].first - met[j].first) + abs(met[i].second - met[j].second);
            minval = min(minval, jarak);
        }
    }
    cout << minval << '\n';
}