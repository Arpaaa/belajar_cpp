#include <iostream>

using namespace std;

/// @note O(n)
bool isPrime(const long long num) {
    if (num <= 1) return false;
    for (long long i = 2; i <= num - 1; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Masukan angka: ";
    long long N{}; cin >> N;

    cout << boolalpha << isPrime(N) << endl;

    return 0;
}