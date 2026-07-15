#include <bits/stdc++.h>
using namespace std;

int n, k;
void printArray(const vector<int> &data) {
    for (const auto d : data) {
        cout << d << ' ';
    }
    cout << endl;
}

int binarySearch(const vector<int> &data, int left, int right) {
    int mid = (left + right) / 2;
    if (left >= right && data[mid] != k) return -1;
    if (data[mid] == k) return mid;
    if (data[mid] > k) return binarySearch(data, left, mid);
    return binarySearch(data, mid + 1, right);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    uniform_int_distribution dist(0, 100);
    signed seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);

    // auto pipe = views::iota(0, n) | views::transform([&](int) { return dist(gen); });
    auto pipe = views::iota(0, n);
    vector<int> numbers(pipe.begin(), pipe.end());

    ranges::sort(numbers);
    printArray(numbers);

    cout << binarySearch(numbers, 0, n) << '\n';
}