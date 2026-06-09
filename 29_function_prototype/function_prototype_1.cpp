#include <iostream>

using namespace std;

// Prototype
// return_type function_name(parameter_type argument1, parameter_type argument2);
double hitung_luas(double panjang, double lebar);

// return_type function_name(parameter_type_1, parameter_type_2, ...);
double hitung_keliling(double, double);

int main() {
    double panjang, lebar;
    cout << "Masukan panjang: ";
    cin >> panjang;

    cout << "Masukan lebar: ";
    cin >> lebar;

    cout << hitung_luas(panjang, lebar) << endl;
    cout << hitung_keliling(panjang, lebar) << endl;

    return 0;
}

double hitung_luas(double panjang, double lebar) {
    return (panjang * lebar);
}

double hitung_keliling(double panjang, double lebar) {
    return (2 * (panjang + lebar));
}
