#include <iostream>
#include <string>

using namespace std;

// Union mengalokasikan satu buah blok data untuk dipakai beberapa variabel
// alamat memori dari member variables sama, sehingga variabel berbagi space memori
// sehingga dapat seperti variabel dinamis (polimorfis) ketika digunakan


union Data {
    int a;     // 4 bytes
    char b[4]; // 4 bytes
}; // ukuran berdasarkan ukuran tipe data terbesar

int main() {
    Data data_union;
    data_union.a = 12345642;

    cout << "data a: " << data_union.a << endl;
    cout << "data b: " << data_union.b << endl;
    cout << endl;

    data_union.b[0] = 'a';
    data_union.b[1] = 'b';
    data_union.b[2] = 'c';
    data_union.b[3] = 'd';

    cout << "data a: " << data_union.a << endl;
    cout << "data b: " << data_union.b << endl;
    cout << endl;

    cout << "alamat a: " << &data_union.a << endl;
    cout << "alamat b: " << &data_union.b << endl;
    // alamat memori sama, sehingga variabel berbagi space memori


    return 0;
}