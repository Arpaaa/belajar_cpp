#include <bits/stdc++.h>

using namespace std;

/// @note O(sqrt(n))
bool isPrime(const long long N) {
    if (N <= 1) return false;
    for (long long i = 2; i*i <= N; i++) {
        if (N % i == 0) return false;
    }
    return true;
}

int main() {
    long long N = 0; cin >> N;

    cout << boolalpha << isPrime(N) << endl;

    return 0;
}