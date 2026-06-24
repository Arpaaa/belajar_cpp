#include <iostream>
#include <cmath>

using namespace std;

bool cekPrima(int N) {
    if (N == 1) return false;
    if (N == 2) return true;

    // Tidak ada bilangan prima yang genap kecuali 2
    if ((N & 1) == 0) return false;

    for (int i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) return false;
    }

    return true;
}

int main() {
    int Q = 0;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int N = 0;
        cin >> N;

        if (cekPrima(N)) {
            cout << "YA\n";
        } else {
            cout << "BUKAN\n";
        }
    }

    return 0;
}