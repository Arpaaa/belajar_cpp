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
 * Soal 3. Apa nilai x terkecl yang memungkinkan array { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } menjadi
 * { 1, 0, 0, 2, 0, 0, 1, 0, 0, 1 }
 */

void printArray(vector<int> &data) {
    for (int d : data) {
        cout << d << " ";
    }
    cout << endl;
}

void fungsi(vector<int> &data, int x) {
    while (x > 0) {
        data[x % 10]++;
        x /= 10;
    }
}

int main() {
    vector<int> data = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    printArray(data);

    fungsi(data, 30369);

    printArray(data);
    return 0;
}