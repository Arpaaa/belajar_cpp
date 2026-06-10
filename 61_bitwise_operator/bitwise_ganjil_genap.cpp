#include <iostream>

using namespace std;

int main() {
    /// Karena penyebab angka tersebut ganjil hanya dari bit paling akhir
    /// 2 = 00000010
    /// 4 = 00000100
    /// 3 = 00000011
    /// 5 = 00000101
    /// Sehingga dapat dimanipulasi saja dengan operator & dengan 1 (00000001)

    int input;
    cout << "Masukan angka: ";
    cin >> input;

    if ((input & 1) == 0) {
        cout << "Angka " << input << " adalah genap" << endl;
    } else {
        cout << "Angka " << input << " adalah ganjil" << endl;
    }

    // Sangat cepat dan efisien karena tidak perlu menghitung (input % 2) == 0

    return 0;
}