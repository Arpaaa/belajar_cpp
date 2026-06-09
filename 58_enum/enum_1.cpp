#include <iostream>

using namespace std;

/// enum (Enumeratoin) digunakan jika ingin membuat sebuah tipe data baru yang isinya
/// adalah pilihan (opsi) yang sudah pasti.

// Membuat tipe data enum baru bernama StatusSiswa
// nama enum disarankan PascalCase
enum StatusSiswa {
    BELUM_VERIFIKASI, /// Nilai aslinya di RAM 0
    AKTIF,            /// Nilai aslinya di RAM 1
    LULUS,            /// Nilai aslinya di RAM 2
    TIDAK_LULUS       /// Nilai aslinya di RAM 3
};

// Mengubah nilai default
enum Category {
    NEWBIE = 5,      /// Nilai menjadi 5
    CASUAL,          /// Nilai menjadi 6
    PRO = 10,        /// Nilai menjadi 10
    MASTER           /// Nilai menjadi 111
};

/// Kelemahan enum biasa (Plain Enum)
/// Scope Pollution, jika ada lebih dari 1 enum di dalam file yang sama, nama opsinya TIDAK BOLEH ADA YANG SAMA
/// karena mereka berada di scope global yang sama.

/// Contoh:
enum Rank {
    // NEWBIE,   --> Ini akan error
    VETERAN,
};

/// Solusinya adalah enum class

int main() {
    StatusSiswa status_arfa = AKTIF;

    if (status_arfa == AKTIF) {
        cout << "Siswa sedang aktif belajar" << endl;
    }
    if (status_arfa == 1) {
        cout << "Siswa sedang aktif belajar" << endl;
    }
    /// Dua-duanya bisa karena AKTIF akan diubah menjadi angka 1

    return 0;
}
