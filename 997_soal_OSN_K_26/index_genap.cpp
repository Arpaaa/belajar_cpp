/*
 * =========================================
 *              DISCLAIMER
 * =========================================
 *
 * Ini bukan merupakan soal asli langsung dari OSN-K 2026, tetapi hanya berasal dari ingatan saya selama pengerjaan.
 * Saya tidak melakukan kecurangan dalam bentuk apapun. Membuat kode ini hanyalah untuk menemukan jawaban ketika saya
 * sudah menyelesaikan soal-soal tersebut, BUKAN dalam waktu pengerjaan.
 *
 * =========================================
 */

#include <iostream>
#include <vector>

using namespace std;

/*
 * Soal 1. Apa kembalian dari PECAH(BELAH1(10))?
 * Soal 2. Apa kembalian dari PECAH(BELAH2(100))?
 */

int PECAH(vector<int> A) {
    if (A.size() == 0) return 0;

    vector<int> C;

    int sum = 0;
    for (int i = 0; i < A.size(); i++) {
        if (i % 2 == 0) {
            sum += A[i];
            continue;
        }
        C.push_back(A[i]);
    }

    return sum - PECAH(C);
}

vector<int> BELAH1(int N) {
    vector<int> A = {};

    for (int i = 1; i <= N; i++) {
        A.push_back(i);
    }

    return A;
}

vector<int> BELAH2(int N) {
    vector<int> B = {};

    for (int i = 1; i <= N; i++) {
        B.push_back(1);
    }

    return B;
}

int main() {
    cout << PECAH(BELAH1(10)) << endl;
    cout << PECAH(BELAH2(100)) << endl;

    return 0;
}