#include <bits/stdc++.h>

#include "../BAB 3 PENCARIAN DAN PENGURUTAN/utils.h"
using namespace std;

void quickSort(int arr[], int left, int right) {
    if (left >= right) return;
    int pLeft = left;
    int pRight = right;
    int pivot = arr[(left + right) / 2];
    while (pLeft <= pRight) {
        while (arr[pLeft] < pivot) pLeft++;
        while (arr[pRight] > pivot) pRight--;
        if (pLeft <= pRight) {
            swap(arr[pLeft], arr[pRight]);
            pLeft++;
            pRight--;
        }
    }
    quickSort(arr, left, pRight);
    quickSort(arr, pLeft, right);
}

int main() {
    int n;
    cin >> n;
    signed seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution dist(0, 100);
    auto pipe = views::iota(0, n) | views::transform([&](int) { return dist(gen); });
    vector<int> nums(pipe.begin(), pipe.end());
    printArray(nums);

    auto array = nums.data();
    quickSort(array, 0, n);
    cout << "[ ";
    for (int i = 0; i < n; i++) cout << array[i] << " ";
    cout << "]\n";
}
