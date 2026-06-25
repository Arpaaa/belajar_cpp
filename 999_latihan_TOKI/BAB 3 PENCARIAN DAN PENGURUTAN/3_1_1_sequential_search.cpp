#include <iostream>
#include <ranges>
#include <vector>
#include <algorithm>
#include <random>
#include "utils.h"

using namespace std;

size_t sequentialSearch(vector<int> &array, int searchValue) {
    for (size_t i = 0; i < array.size(); i++) {
        if (array[i] == searchValue) return i;
    }

    return -1;
}

int main() {
    int N = 0, X = 0;
    cin >> N >> X;

    random_device rd;
    mt19937 g(rd());

    auto pipe = views::iota(1, N + 1);

    vector<int> data(pipe.begin(), pipe.end());

    ranges::shuffle(data, g);

    cout << sequentialSearch(data, X);

    return 0;
}
