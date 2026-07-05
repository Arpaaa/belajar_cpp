#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ranges>

#include "utils.h"

using namespace std;

void bubble_sort(vector<int> &data) {
    for (int i = 0; i < data.size(); i++) {
        for (int j = 0; j < data.size() - i - 1; j++) {
            if (data[j] > data[j + 1]) swap(data[j], data[j + 1]);
        }
    }
}

int main() {
    int N = 0; cin >> N;

    auto pipe = views::iota(1, N + 1);
    vector<int> numbers(pipe.begin(), pipe.end());

    random_device rd;
    mt19937 g(rd());

    shuffle(numbers.begin(), numbers.end(), g);

    printArray(numbers);

    bubble_sort(numbers);

    printArray(numbers);

    return 0;
}