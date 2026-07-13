#include <bits/stdc++.h>
using namespace std;
#define pusing for(int i=0;i<n;i++)
int main() {
    int n; cin >> n;
    auto met = vector(n, pair(0, 0));
    pusing { cin >> met[i].first >> met[i].second; }
    ranges::sort(met);
    int minval = INT_MAX;
    pusing {
        for (int j = i + 1; j < n; j++) {
            int dx = met[j].first - met[i].first;
            if (dx >= minval) break;
            int jrk = dx + abs(met[i].second - met[j].second);
            minval = min(jrk, minval);
        }
    }

    cout << minval << '\n';
}