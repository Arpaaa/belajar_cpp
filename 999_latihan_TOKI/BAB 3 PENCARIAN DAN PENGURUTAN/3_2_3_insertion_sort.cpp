#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <ranges>

#include "utils.h"

using namespace std;

void insertionSort(vector<int> &data) {
    vector<int> temp{};

    for (size_t i = 0; i < data.size(); i++) {
        size_t pos = i;
        while ((pos > 0) && (data[pos] < data[pos - 1])) {
            swap(data[pos], data[pos - 1]);
            pos--;
        }
    }
}

int main() {
    int N = 0; cin >> N;

    auto pipe = views::iota(1, N+1);
    vector<int> numbers(pipe.begin(), pipe.end());

    random_device rd;
    mt19937 g(rd());

    ranges::shuffle(numbers, g);

    printArray(numbers);

    insertionSort(numbers);

    printArray(numbers);

    return 0;
}