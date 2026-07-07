#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <ranges>
#include <random>

using namespace std;

template <typename T>
void printArray(vector<T> &data) {
    for (auto d : data) {
        cout << d << " ";
    }
    cout << endl;
}

int main() {
    random_device rd;
    mt19937 g(rd());

    const int N = 10;

    auto pipe = views::iota(1, N+1);
    vector<int> nums(pipe.begin(), pipe.end());

    ranges::shuffle(nums, g);
    printArray(nums);

    ranges::sort(nums);
    printArray(nums);

    cout << endl;

    vector<int> nums_two = {1, 2, 2, 1, 4, 5, 6, 2, 4};
    printArray(nums_two);

    ranges::sort(nums_two);
    printArray(nums_two);

    auto [g_str, g_end] = ranges::unique(nums_two);
    nums_two.erase(g_str, g_end);
    printArray(nums_two);

    cout << endl;

    uniform_int_distribution<int> dist(1, 100);

    auto pipe2 = views::iota(0, N) | views::transform([&](int) { return dist(g); });
    vector<int> nums_three(pipe2.begin(), pipe2.end());

    printArray(nums_three);
    

    return 0;
}