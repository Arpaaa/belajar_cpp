#include <iostream>

using namespace std;

double pangkat_iterasi(double a, double b) {
    double hasil = 1;

    if (b == 0) {
        hasil = 1;
    } else if (b < 0) {
        for (int i = 1; i >= b; i--) {
            hasil /= a;
        }
    } else if (b > 0) {
        for (int i = 1; i <= b; i++) {
            hasil *= a;
        }
    }

    return hasil;
}

double pangkat_rekursif(double a, double b) {
    if (b <= 1) return a;
    return pangkat_rekursif(a, b - 1)  * a;

}

int main() {
    int a, b;
    cout << "Masukan nilai basis: ";
    cin >> a;

    cout << "Masukan nilai eksponen: ";
    cin >> b;

    cout << "Nilai dari a^b = " << pangkat_iterasi(a, b) << endl;
    cout << "Nilai dari a^b menggunakan rekursif = " << pangkat_rekursif(a, b) << endl;

    return 0;
}
