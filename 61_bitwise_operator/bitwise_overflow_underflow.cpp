#include <iostream>
#include <bitset>
#include <cstdint>


using namespace std;

void printBinary(const uint8_t &numberRef, const string &name) {
    cout << name << ": " << bitset<8>(numberRef) << endl;
}

void printBinaryInt8_t(const int8_t &numberRef, const string &name) {
    cout << name << ": " << bitset<8>(numberRef) << endl;
}



int main() {
    // Overflow
    cout << "Overflow" << endl;
    uint8_t a = 128; // 10000000
    printBinary(a, "128");
    printBinary(a << 1, "Overflow 128: ");
    /// Output: 00000000
    /// Bit 1 di paling kiri akan hilang begitu saja
    cout << endl;

    // Underflow
    cout << "Underflow" << endl;
    uint8_t b = 1;
    printBinary(b, "b"); // 00000001
    printBinary(b >> 1, "Underflow 1: ");
    /// Output: 00000000
    /// Bit 1 di paling kanan akan hilang begitu saja.
    cout << endl;

    // Overflow pada bilangan negatif
    cout << "Underflow pada bilangan negatif" << endl;
    int8_t c = -128; // 10000000
    printBinaryInt8_t(c, "-128");

    int8_t d = c << 1;
    printBinaryInt8_t(d, "Overflow -128");
    // Output: 00000000

    cout << "Nilai c << 1: " << static_cast<int>(d) << endl;

    int8_t e = 64; // 01000000
    printBinaryInt8_t(e, "64");

    int8_t f = e << 1;
    printBinaryInt8_t(f, "Overflow 64");
    cout << "Nilai e << 1: " << static_cast<int>(f) << endl;
    // Output: 1000000

    // Sign Extension
    int8_t g = -6; // 11111010
    printBinaryInt8_t(g, "-6");

    int8_t h = g >> 1;
    printBinaryInt8_t(h, "g >> 1");
    // Output: 11111101
    cout << "Nilai g >> 1: " << static_cast<int>(h) << endl;
    /// Bit paling kiri akan diisi angka 1 bukan 0
    ///
    return 0;
}
