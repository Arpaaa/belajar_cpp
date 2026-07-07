#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string N;
    if (!(cin >> N)) return 0;

    sort(N.begin(), N.end());

    vector<string> perm_strings;
    do {
        perm_strings.push_back(N);
    } while (next_permutation(N.begin(), N.end()));

    for (auto p : perm_strings) {
        cout << p << "\n";
    }

    return 0;
}