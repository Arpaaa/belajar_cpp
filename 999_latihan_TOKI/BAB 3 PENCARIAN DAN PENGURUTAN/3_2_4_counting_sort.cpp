#include <bits/stdc++.h>

#include "utils.h"

using namespace std;

void countingSort(vector<int> &data) {
    const int max_value = *(ranges::max_element(data));

    vector<int> ftable(max_value, 0);

    for (const int value : data) {
        ftable[value - 1]++;
    }

    size_t index = 0;
    for (int i = 0; i < max_value; i++) {
        for (int j = 0; j < ftable[i]; j++) {
            data[index] = i + 1;
            index++;
        }
    }
}

int main() {
    int N = 0; cin >> N;

    // auto pipe = views::iota(1, N+1);
    // vector<int> numbers(pipe.begin(), pipe.end());

    vector<int> numbers{};
    for (int i = 0; i < N; i++) {
        int x = 0; cin >> x;
        numbers.push_back(x);
    }

    random_device rd;
    mt19937 g(rd());

    ranges::shuffle(numbers, g);

    printArray(numbers);

    countingSort(numbers);

    printArray(numbers);

    return 0;
}