#include <iostream>

using namespace std;

int main() {
    int a = 4;
    int b = 9;
    int c = -7;
    float d = 4.0f;
    float e = 9.0f;

    // Penjumlahan (+)
    cout << "Penjumlahan (+): " << endl;
    cout << a << " + " << b << " = " << a + b << endl;

    // Pengurangan (-)
    cout << endl;
    cout << "Pengurangan (-): " << endl;

    cout << b << " - " << a << " = " << b - a << endl;
    cout << a << " - " << b << " = " << a - b << endl;

    // Perkalian (*)
    cout << endl;
    cout << "Perkalian (*): " << endl;

    cout << a << " * " << b << " = " << a * b << endl;

    // Pembagian (/)
    cout << endl;
    cout << "Pembagian (/): " << endl;

    cout << a << " / " << b << " = " << a / b << endl;
    cout << b << " / " << a << " = " << b / a << endl; //  6 / 4 = 1.5   Karena integer adalah bilangan bulat, maka 6 / 4 = 1 (Pembulatan ke bawah jika positif)
    cout << c << " / " << a << " = " << c / a << endl; // -7 / 4 = -1.75 Karena integer adalah bilangan bulat, maka 7 / 4 = -1 (Pembulatan ke atas jika negatif)
                                                       //                Dapat disimpulkan bahwa pada pembagian integer, maka akan dibulatkan ke angka mendekati 0

    cout << e << " / " << a << " = " << e / a << endl; // float / integer = float. Tapi tidak disarankan
    cout << b << " / " << d << " = " << b / d << endl; // integer / float = float. Tapi tidak disarankan
                                                       // Tidak disarankan karena tipe data yang integer akan dikonversi menjadi float terlebih dahulu.
    cout << e << " / " << d << " = " << e / d << endl; // float / float = float.

    // Modulus (%)
    cout << endl;
    cout << "Modulus (%): " << endl;

    cout << b << " % " << a << " = " << b % a << endl;      // Karena 9 / 4 = 2 sisa 1, maka 9 % 4 = 1
    // cout << a << " % " << d << " = " << a % d << endl;   // Error karena modulus hanya bisa digunakan untuk tipe data integer.

    // Urutan Eksekusi
    cout << endl;
    cout << "Urutan Eksekusi: " << endl;

    cout << "5 + 3 * 2 = " << 5 + 3 * 2 << endl;           // Perkalian (*) lebih dulu daripada penjumlahan (+)
    cout << "5 + 4 / 2 = " << 5 + 4 / 2 << endl;           // Pembagian (/) lebih dulu daripada penjumlahan (+)
    cout << "(5 + 3) * 2 = " << (5 + 3) * 2 << endl;       // Kurung () lebih dulu daripada perkalian (*)

    return 0;
}
