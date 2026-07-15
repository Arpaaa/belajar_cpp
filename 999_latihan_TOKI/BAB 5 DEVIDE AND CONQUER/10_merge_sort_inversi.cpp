#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll merge(vector<int> &arr, int left, int mid, int right) {
    vector<int> kiri(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> kanan(arr.begin() + mid + 1, arr.begin() + right + 1);

    ll inversion = 0;
    int i = 0, j = 0, k = left;
    while (i < kiri.size() && j < kanan.size()) {
        if (kiri[i] <= kanan[j]) {
            arr[k++] = kiri[i++];
        } else {
            arr[k++] = kanan[j++];
            inversion += (kiri.size() - i);
        }
    }

    while (i < kiri.size()) arr[k++] = kiri[i++];
    while (j < kanan.size()) arr[k++] = kanan[j++];

    return inversion;
}

ll mergeSort(vector<int> &arr, int left, int right) {
    ll total_inversion = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        total_inversion += mergeSort(arr, left, mid);
        total_inversion += mergeSort(arr, mid + 1, right);
        total_inversion += merge(arr, left, mid, right);
    }

    return total_inversion;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int> unik(n);
    for (int i=0; i<n; i++) cin >> unik[i];

    cout << mergeSort(unik, 0, n - 1) << '\n';
}