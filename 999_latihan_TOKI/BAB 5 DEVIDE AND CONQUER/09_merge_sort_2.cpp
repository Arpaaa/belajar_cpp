#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int> &arr, int left, int mid, int right) {
    vector<int> kiri(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> kanan(arr.begin() + mid + 1, arr.begin() + right + 1);

    long long total_inversi = 0;

    int i = 0, j = 0, k = left;

    while (i < kiri.size() && j < kanan.size()) {
        if (kiri[i] < kanan[j]) {
            arr[k++] = kiri[i++];
        } else {
            arr[k++] = kanan[j++];
            total_inversi += (kiri.size() - i);
        }
    }

    while (i < kiri.size()) arr[k++] = kiri[i++];
    while (j < kanan.size()) arr[k++] = kanan[j++];

    return total_inversi;
}

long long mergeSort(vector<int> &arr, int left, int right) {
    long long inversi = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        inversi += mergeSort(arr, left, mid);
        inversi += mergeSort(arr, mid + 1, right);
        inversi += merge(arr, left, mid, right);
    }
    return inversi;
}

int main() {
    int n;
    cin >> n;
    uniform_int_distribution<int> dist(0, 100);
    unsigned seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);

    auto pipe = views::iota(0, n) | views::transform([&](int) { return dist(gen); });
    vector<int> numbers(pipe.begin(), pipe.end());

    for (auto n: numbers) cout << n << ' ';
    cout << '\n';

    cout << mergeSort(numbers, 0, n - 1) << '\n';
    for (auto n: numbers) cout << n << ' ';
    cout << '\n';
}
