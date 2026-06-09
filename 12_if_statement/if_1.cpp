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
    }

    if (a >= 5) {
        cout << a << " Lebih dari atau sama dengan 5" << endl;
    }

    cout << "Program Selesai" << endl;

    return 0;
}