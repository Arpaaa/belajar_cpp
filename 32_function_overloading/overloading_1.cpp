#include <iostream>

using namespace std;

// Overloading = Menimpa

// Basic Function
int luas_kotak(int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas;
}

// Overload function
int luas_kotak(int sisi) {
    int luas = sisi * sisi;
    return luas;
}

double luas_kotak(double panjang, double lebar) {
    return panjang * lebar;
}
/*
 * Yang ditermasuk pembeda/signature dalam function overloading
 * 1. Jumlah parameter
 * 2. Tipe data perameter
 * 3. Urutan tipe data parameter
 * return type tidak termasuk, sehingga tidak dapat meng-overloading fungsi dengan bermodalkan
 * mengubah return type.
 */

int main() {
    cout << "Luas kotak 2x3: " << luas_kotak(2, 3) << endl;
    cout << "Luas kotak 2x2: " << luas_kotak(2, 2) << endl;
    cout << "Luas kotak 2x2: " << luas_kotak(2.12, 2.5) << endl;
    return 0;
}