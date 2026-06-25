#include <iostream>
#include <ranges>
#include <vector>

#include "utils.h"

using namespace std;

size_t binarySearch(const vector<int> &data,const int searchValue) {
    if (data.empty()) return -1;

    size_t left = 0;
    size_t right = data.size() - 1;

    while (left <= right) {
        size_t mid = (left + right) / 2;

        cout << mid << endl;
        if (data[mid] == searchValue) return mid;

        if (data[mid] < searchValue) {
            left = mid + 1;
        } else {
            if (mid == 0) break;
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    cout << "Masukan panjang array (N) dan nilai yang ingin dicari (X): " << endl;
    int N, X; cin >> N >> X;

    auto pipe = views::iota(1, N + 1);
    auto data = vector(pipe.begin(), pipe.end());

    printArray(data);

    cout << binarySearch(data, X) << endl;

    return 0;
}