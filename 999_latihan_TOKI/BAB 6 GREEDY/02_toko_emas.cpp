#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int n;
double k;
struct gold {
    double r;
    int w;
    int p;
};
vector<gold> logam;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    logam.resize(n);
    for (int i=0; i<n; i++) {
        cin >> logam[i].w >> logam[i].p;
        logam[i].r = (double)logam[i].p / logam[i].w;
    }

    sort(logam.begin(), logam.end(), [](gold a, gold b) {
        return a.r > b.r;
    });

    double total = 0;
    for (int i=0; i<n; i++) {
        if (logam[i].w <= k) {
            total += logam[i].p;
            k -= logam[i].w;
        } else {
            total += (k / logam[i].w) * logam[i].p;
            break;
        }
    }

    cout << fixed << setprecision(5) << total << '\n';
}