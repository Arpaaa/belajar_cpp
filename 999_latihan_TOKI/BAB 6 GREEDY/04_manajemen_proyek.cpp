#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> rooms;
vector<pair<int, int>> ev;
int main() {
    cin >> n >> k;
    rooms.assign(k, 0); ev.resize(n);
    for (int i=0; i<k; i++) cout << rooms[i] << endl;
    for (int i=0; i<n; i++) cin >> ev[i].second >> ev[i].first;
    // first: end time. second: start time
    sort(ev.begin(), ev.end());

    int total = 0;
    for (int i=0; i<n; i++) {
        
    }
}