#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

bool isPrime(const long long N) {
    if (N <= 1) return false;
    for (long long i = 2; i*i <= N; i++) {
        if (N % i == 0) return false;
    }
    return true;
}

/// @note O(n sqrt(n))
vector<long long> primeGenerator(const long long N) {
    vector<long long> primeList{};

    for (long long i = 1; i * i <= N; i++) {
        if (isPrime(i)) {
            primeList.push_back(i);
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

    const auto primeList = primeGenerator(N);

    printVector(primeList);

    return 0;
}
