#include <bits/stdc++.h>

#include "../BAB 3 PENCARIAN DAN PENGURUTAN/utils.h"
using namespace std;
#define t size_t

int n;

void merge(int arr[], t aLeft, t aRight, t bLeft, t bRight) {
    t size = bRight - aLeft + 1;
    int temp[size];
    t iTemp = 0, aIndex = aLeft, bIndex = bLeft;

    while ((aIndex <= aRight) && (bIndex <= bRight)) {
        temp[iTemp++] = (arr[aIndex] < arr[bIndex]) ? arr[aIndex++] : arr[bIndex++];
    }

    while (aIndex <= aRight) temp[iTemp++] = arr[aIndex++];
    while (bIndex <= bRight) temp[iTemp++] = arr[bIndex++];

    for (int i = 0; i < size; i++) arr[aLeft + i] = temp[i];
}

void mergeSort(int arr[], t left, t right) {
    if (left == right) return;
    t mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, 0, mid, mid + 1, right);
}

int main() {
    cin >> n;
    uniform_int_distribution<int> dist(1, 5000);
    signed seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    auto pipe = views::iota(0, n) | views::transform([&](int) { return dist(gen); });

    auto numbers = vector(pipe.begin(), pipe.end());
    printArray(numbers);

    int* arr = numbers.data();
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}