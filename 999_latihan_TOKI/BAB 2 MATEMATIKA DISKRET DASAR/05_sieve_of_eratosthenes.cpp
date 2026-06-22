#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

/// @note O(n log (log n))
vector<long long> sieveOfEratosthenes(const long long N) {
    vector eliminated(N + 1, false);

    vector<long long> primeList{};

    for (long long i = 2; i <= N; i++) {
        if (!eliminated[i]) {
            primeList.push_back(i);
            for (long long j = i * i; j <= N; j += i) {
                eliminated[j] = true;
            }
        }
    }

    return primeList;
}

void printVector(const vector<long long> &data) {
    for (size_t i = 0; i < data.size(); i++) {
        if (i % 10 == 0) cout << endl;

        cout << setw(4) << data[i] << " ";
    }
}

int main() {
    long long N = 0; cin >> N;

    const auto primeList = sieveOfEratosthenes(N);

    printVector(primeList);

    return 0;
}