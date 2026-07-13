#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <ranges>
#include <unordered_set>
#include <vector>

using namespace std;

void printArray(vector<int> &data) {
    for (int d : data) {
        cout << d << " ";
    }
    cout << endl;
}

int N = 0;
vector<int> nums;

int countTriplets() {
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                int p = nums[i];
                int q = nums[j];
                int r = nums[k];

                if (p + q + r == 0)
                    count++;
            }
        }
    }
    return count;
}

int main() {
    cin >> N;

    uniform_int_distribution<int> dist(-100000, 100000);
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);

    unordered_set<int> us;
    while (us.size() < N) {
        us.insert(dist(gen));
    }

    nums.assign(us.begin(), us.end());
    ranges::shuffle(nums, gen);
    // printArray(nums);

    cout << "Menghitung dimulai" << endl;
    cout << countTriplets() << endl;

    return 0;
}
