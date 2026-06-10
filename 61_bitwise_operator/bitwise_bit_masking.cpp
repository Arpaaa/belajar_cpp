#include <bitset>
#include <cstdint>
#include <iostream>
#include <string>

using namespace std;

/// Semisal ingin membuat 4 kondisi player. Stun, Poison, Slow, Blind.
/// Daripada membuat 4 variabel yang memakain 4*1 Byte. maka mending 1 byte dijadikan 4 bool.
/// Contoh:

// Memaksa enum menggunakan tipe uint8_t atau 8 bit = 1 Byte
enum class PlayerStatus : uint8_t {
    STUN = 1 << 0,
    POISON = 1 << 1,
    SLOW = 1 << 2,
    BLIND = 1 << 3
};

void printBinary(const uint8_t &num, const string &str) {
    cout << str << ": " << bitset<8>(num) << endl;
}

int main() {
    uint8_t statusArfa = 0; /// Mulai dengan kondisi semua false (00000000)
    printBinary(statusArfa, "arfa (1)");

    /// Memberikan status STUN
    statusArfa |= static_cast<uint8_t>(PlayerStatus::STUN);
    /// Logika: Karena awalnya arfa = 00000000
    /// Maka  :                       00000001
    /// --------------------------------------- |
    ///                               00000001

    printBinary(statusArfa, "arfa (2)");

    /// Memberikan status SLOW
    statusArfa |= static_cast<uint8_t>(PlayerStatus::SLOW);
    /// Logika: Karena sekarang arfa = 00000001
    /// Maka  :                        00000100
    /// ---------------------------------------- |
    ///                                00000101

    printBinary(statusArfa, "arfa (3)");


    /// Cara ngecek kondisinya
    if (statusArfa & static_cast<uint8_t>(PlayerStatus::STUN)) {
        /// Logika: Karena sekarang arfa = 00000101
        /// Maka  :                        00000001
        /// --------------------------------------- &
        ///                                00000001
        ///                                 (true)
        cout << "Player arfa sedang terkena stun" << endl;
    }

    if (statusArfa & static_cast<uint8_t>(PlayerStatus::BLIND)) {
        cout << "Player arfa sedang terkena blind" << endl;
    }

    // Cara reset menggunakan kombinasi & dan ~
    statusArfa &= ~static_cast<uint8_t>(PlayerStatus::STUN);
    /// Logika : Karena sekarang arfa = 00000101
    /// Maka   :                        11111110
    /// ------------------------------------------ &
    ///                                 00000100

    printBinary(statusArfa, "arfa (4)");
    return 0;
}
