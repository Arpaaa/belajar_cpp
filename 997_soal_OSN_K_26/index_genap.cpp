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
 * Soal 1. Apa kembalian dari fungsi(createArray(10))?
 * Soal 2. Apa kembalian dari fugnsi(createZeroArray(100))?
 */

int fungsi(vector<int> input) {
    if (input.size() == 0) return 0;

    vector<int> angkaSisa;

    int sum = 0;
    for (int i = 0; i < input.size(); i++) {
        if (i % 2 == 0) {
            sum += input[i];
            continue;
        }
        angkaSisa.push_back(input[i]);
    }

    return sum - fungsi(angkaSisa);
}

vector<int> createArray(int a) {
    vector<int> hasil = {};

    for (int i = 1; i <= a; i++) {
        hasil.push_back(i);
    }

    return hasil;
}

vector<int> createZeroArray(int a) {
    vector<int> hasil = {};

    for (int i = 1; i <= a; i++) {
        hasil.push_back(1);
    }

    return hasil;
}

int main() {
    cout << fungsi(createArray(10)) << endl;
    cout << fungsi(createZeroArray(100)) << endl;

    return 0;
}