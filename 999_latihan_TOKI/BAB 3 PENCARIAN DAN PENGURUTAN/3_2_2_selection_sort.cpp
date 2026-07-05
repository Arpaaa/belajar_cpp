#include <iostream>
#include <ranges>
#include <vector>
#include <algorithm>
#include <random>

#include "utils.h"

using namespace std;

void selection_sort(vector<int> &data) {
    for (int i = 0; i < data.size(); i++) {
        int min_value = i;
        for (int j = i; j - data.size(); j++) {
            if (data[j] < data[i]) min_value = j;
        }

        if (min_value != i) swap(data[i], data[min_value]);
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

    selection_sort(numbers);

    printArray(numbers);

    return 0;
}