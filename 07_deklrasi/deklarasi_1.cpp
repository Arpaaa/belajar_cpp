#include <iostream>

using namespace std;

int main() {
    // Hardcoded
    int x = 5; // assignment. Variabel x bertipe integer dan memiliki nilai 5.
    cout << x << endl;
    cout << x + 5 << endl;

    int y;      // Deklarasi -> mendaftarkan nama variabel saja.
    y = 7;      // Inisialisasi -> pemberian nilai pada variabel
    cout << y << endl;

    // Dari console
    int z;
    cout << "Masukan nilai: ";  // << adalah simbol insertion. data mengalir dari program ke output (console).                 Dalam ke luar
    cin >> z;                   // >> adalah simbol ekstraksi. data mengalir dari input keyboard (hardware) hingga ke program. Luar ke dalam
    cout << "Nilai yang kamu masukan yaitu: " << z << endl;

    return 0;
}