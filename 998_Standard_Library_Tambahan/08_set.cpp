#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <ranges>
#include <set>
#include <string>
#include <unordered_set>

using namespace std;

template <typename T> void printSet(set<T> &setRef) {
    for (auto s : setRef) {
        cout << s << " ";
    }
    cout << endl;
}

template <typename T> void printArray(vector<T> &arrayRef) {
    for (auto el : arrayRef) {
        cout << el << " ";
    }
    cout << endl;
}

int N = 50;

int main() {
    set<int> s; // Set standar (terurut dari besar ke terkecil)

    set<string> s_pakaian; // set untuk tipe data lain

    set<int, greater<int>> s_terbalik; // terurut dari Besar ke terkecil

    s = {10, 5, 20};

    auto it = s.begin();

    cout << *it << endl;

    it++;
    cout << *it << endl;

    printSet(s);

    s.clear();

    uniform_int_distribution<int> dist(-50, 50);
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    mt19937 gen(seed);

    auto pipe =
        views::iota(0, N) | views::transform([&](int) { return dist(gen); });
    vector<int> nums(pipe.begin(), pipe.end());

    printArray(nums);
    cout << "Array size: " << nums.size() << endl;

    for (int x : nums) {
        s.insert(x);
    }
    printSet(s);
    cout << "Set size: " << s.size() << endl;

    unordered_set<int> us;
    while (us.size() < N) {
        us.insert(dist(gen));
    }

    for (auto el : us) {
        cout << el << " ";
    }
    cout << endl;
    cout << "Unordered set size: " << us.size() << endl;

    vector<int> nums2(us.begin(), us.end());
    ranges::shuffle(nums2, gen);

    printArray(nums2);
    return 0;
}
