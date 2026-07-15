#include <bits/stdc++.h>
using namespace std;

long long fastExpo(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;

    while (exp > 0) {
        if (exp & 1) { // Jika pangkat ganjil
            res = static_cast<__int128>(res) * base % mod;
        }

        base = static_cast<__int128>(base) * base % mod;
        exp >>= 1;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cout << fastExpo(2, 10, 1000000007) << '\n';

    cout << fastExpo(3, 1000000000000000000LL, 1000000007) << '\n';
}