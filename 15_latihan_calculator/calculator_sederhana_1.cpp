#include <iostream>

using namespace std;

int main() {
    float a, b, hasil;
    char aritmatika;

    cout << "Masukan nilai pertama: ";
    cin >> a;

    cout << "Pilih operator (+, -, *, /): ";
    cin >> aritmatika;

    cout << "Masukan nilai kedua: ";
    cin >> b;

    cout << a << aritmatika << b << endl;

    if (aritmatika == '+') {
        hasil = a + b;
    } else if (aritmatika == '-') {
        hasil = a - b;
    } else if (aritmatika == '*') {
        hasil = a * b;
    } else if (aritmatika == '/') {
        hasil = a / b;
    } else {
        cout << "Operator aritmatika tidak valid" << endl;
        return 0;
    }
        cout << a << aritmatika << b << '=' << hasil << endl;
        cout << "Program Selesai" << endl;
    return 0;
}