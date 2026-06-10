#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(const unsigned short &val, const string &name) {
    cout << name << " = " << bitset<8>(val) << endl;
}

int main() {
    /// Bitwise operator membandingkan atau menggeser angka 0 dan 1 secara
    /// vertikal maupun horizontal

    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    /// & bitwise AND
    /// Menghasilkan 1 HANYA JIKA kedua bit yg dibandingkan bernilai 1. Sisanya 0

    cout << "& = Bitwise AND" << endl;
    c = a & b;
    printBinary(a, "a"); // 00000110
    printBinary(b, "b"); // 00001010
    printBinary(c, "c"); // 00000010

     cout << "Nilai c: " << c << endl;

    cout << endl;

    cout << "| - Bitwise OR" << endl;
    /// | = Bitwise OR
    /// Menghasilkan jika SALAH SATU ATAU KEDUA bit yang dibandingkan bernilai 1
    a = 6;
    b = 10;

    c = a | b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    cout << "^ - Bitwise XOR" << endl;
    /// Bitwise XOR Exclusive OR
    /// Menghasilkan 1 HANYA JIKA bitnya berbeda.
    cout << "Nilai c: " << c << endl;
    cout << endl;
    // ^ = Bitwise XOR
    a = 6;
    b = 10;

    c = a ^ b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");

    cout << "Nilai c: " << c << endl;
    cout << endl;

    // ~ = Bitwise NOT
    a = 6;
    b = 10;

    cout << "~ - Bitwise NOT" << endl;
    printBinary(c, "c ");
    printBinary(~c, "~c");
    cout << ~c << endl;

    cout << "Nilai c: " << c << endl;
    cout << endl;

    cout << "<< - Bitwise Left Shift" << endl;
    /// << - Bitwise Left Shift
    /// Menggeser semua susunan bit ke arah kiri.
    /// EFEK: Setipa bergeser 1 kali ke kiri, nilainya sama dengan dikali 2
    a = 5;
    cout << "a = " << a << endl;
    printBinary(a, "a");

    a = a << 1;
    printBinary(a, "a");
    cout << "a = " << a << endl;

    a = a << 2;
    printBinary(a, "a");
    cout << "a = " << a << endl;

    cout << ">> - Bitwise Right Shift" << endl;
    /// >> - Bitwise Right Shift
    /// Menggeser semua susunan bit ke kanan
    /// EFEK: Setiap bergeser 1 kali ke kanan, nilainya sama dengan dibagi 2 (pembulatan
    ///       ke bawah)
    a = 10;
    cout << "a = " << a << endl;
    printBinary(a, "a");

    a = a >> 1;
    cout << "a = " << a << endl;
    printBinary(a, "a");

    a = a >> 1;
    cout << "a = " << a << endl;
    printBinary(a, "a");
    cout << endl;

    cout << "" << endl;

    return 0;
}