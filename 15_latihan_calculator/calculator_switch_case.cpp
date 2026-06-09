#include <iostream>

using namespace std;

int main() {
    float x, y, hasil;
    char aritmatika;

    cout << "Masukan angka pertama: ";
    cin >> x;

    cout << "Maskan operator (+, -, *, /): ";
    cin >> aritmatika;

    cout << "Masukan angka kedua: ";
    cin >> y;

    switch (aritmatika) {
        case '+':
            hasil = x + y;
            break;
        case '-':
            hasil = x - y;
            break;
        case '*':
            hasil = x * y;
            break;
        case '/':
            hasil = x / y;
            break;
        default:
            cout << "Operator tidak valid" << endl;
            return 0;
    }

    cout << x << aritmatika << y << '=' << hasil << endl;
    return 0;
}