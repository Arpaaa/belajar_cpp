#include <cstdint>
#include <iostream>
#include <bitset>

using namespace std;

void printBinary(const uint8_t &num, const string &str) {
    cout << str << ": " << bitset<8>(num) << endl;
}

int main() {
    int x = 5;  /// 00000101
    int y = 10; /// 00001010

    printBinary(x, "x awal");
    printBinary(y, "y awal");

    x = x ^ y;
    /// Logika:     00000101
    ///       :     00001010
    /// ---------------------- ^
    ///             00001111
    printBinary(x, "x (2) ");

    // Swap y menjadi x
    y = x ^ y;
    /// Logika:     00001111
    ///       :     00001010
    ///----------------------- ^
    ///             00000101
    printBinary(y, "y akhir");

    // Swap x jadi y
    x = x ^ y;
    printBinary(x, "x akhir");

    return 0;
}
