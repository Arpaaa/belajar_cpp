#include <iostream>

using namespace std;

double keliling_persegi(double panjang, double lebar) {
    return ((2 * (panjang + lebar)));
}

double luas_persegi(double panjang, double lebar) {
    return (panjang * lebar);
}

void tampilkan_luas(double panjang, double lebar) {
    cout << "Luasnya adalah: " << luas_persegi(panjang, lebar) << endl;
}

void tampilkan_keliling(double panjang, double lebar) {
    cout << "Kelilingnya adalah: " << keliling_persegi(panjang, lebar) << endl;
}

int main() {
    double panjang, lebar;
    cout << "Masukan panjang: ";
    cin >> panjang;

    cout << "Masukan lebar: ";
    cin >> lebar;

    tampilkan_keliling(panjang, lebar);
    tampilkan_luas(panjang, lebar);

    return 0;
}
