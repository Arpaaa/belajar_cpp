#include <iostream>
#include <vector>

using namespace std;

void printData(int val) {
    cout << val << endl;
}

void printBarisan(const vector<int> &barisanRef) {
    for (const int &angka : barisanRef) {
        cout << angka << " ";
    }
}

int main() {
    /// Comma Operator (,) -> digunakan untuk menggabungkan beberapa ekspresi
    /// menjadi satu baris, lalu mengeksekusi secara berurutan dari kiri ke kanan

    /// Nilai yang DIKEMBALIKAN (diambil) untuk dimasukan ke dalam variabel adalah
    /// nilai paling kanan atau terakhir.

    int angka = (5, 10, 20);

    cout << angka << endl;
    /// 5 dan 10 dibuang begitu aja
    /// angka 5 dieksekusi, lalu dibuang. Angka 10 dieksekusi lalu dibuang.
    /// ankga 20 dieksekusi dan nilainya diambil untuk dimasukan ke dalam variabel

    /// Juga dapat melakukan berbagai hal termasuk cout, panggil fungsi, dll.

    /// Pengunaan, semisal ingin menggunakan 2 variabel pada loop
    vector<int> barisan = {1, 2, 3, 4, 5};
    printBarisan(barisan);

    // mendefinisikan i dan j                increment dan decrement i dan j
    for (size_t i = 0, j = barisan.size() - 1; i < j; i++, j--) {
        swap(barisan[i], barisan[j]);
    }
    cout << endl;
    printBarisan(barisan);


    return 0;
}
