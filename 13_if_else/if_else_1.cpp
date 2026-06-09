#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "Masukan angka dari 1-10: ";
    cin >> a;

    // If statement
    // Kondisi dalam bentuk boolean
    if (a < 5) {
        cout << a << " Kurang dari 5" << endl;
    } else if ((a >= 5) and (a < 10)) {
        cout << a << " Di antara 4 dan 10" << endl;
    } else {
        cout << a << " Lebih dari 10 atau sama dengan 10" << endl;
    }

    // if (a >= 5) {
    //     cout << a << " Lebih dari atau sama dengan 5" << endl;
    // }

    cout << "Program Selesai" << endl;

    return 0;
}