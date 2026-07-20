    #include <bits/stdc++.h>
    using namespace std;
    int n;
    vector<pair<int, int>> ev;
    int main() {
        cin >> n;
        ev.resize(n);
        for (int i=0; i<n; i++) cin >> ev[i].second >> ev[i].first;
        sort(ev.begin(), ev.end());

        // first: akhir acara, second: awal acara.
        int sum = 0;
        int last = 0;
        for (int i=0; i<n; i++) {
            if (ev[i].second >= last) {
                last = ev[i].first;
                sum++;
            }
        }

        cout << sum << '\n';
    }
