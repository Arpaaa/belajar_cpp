#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, h;
vector<int> wadah;

bool bisa(int kec) {
    if (kec == 0) return false;
    int used_h = 0;
    for (int i=0; i<n; i++) {
        used_h += (wadah[i] + kec - 1) / kec;
    }

    return used_h <= h;
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> h;
    wadah.resize(n);
    for (int i=0; i<n; i++) cin >> wadah[i];

    // K besar maka kecepatan naik sehingga cepat habis
    // K kecil maka kecepatan turun sehingga lama habis
    // K paling tinggi ialah makan semua sekaligus, K paling kecil ialah elemen paling kecil.

    int low = 1;
    int high = *max_element(wadah.begin(), wadah.end());
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (bisa(mid)) {
            high = mid - 1;
            ans = mid;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << '\n';
}