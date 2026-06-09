#include <iostream>

using namespace std;

/// pakai keyword "enum class"
enum class StatusSiswa {
    BELUM_TERDAFTAR,
    AKTIF,
    LULUS,
    TIDAK_LULUS
};

enum class StatusGuru {
    AKTIF,      /// Tidak bentrok dengan AKTIF di StatusSiswa
    TIDAK_AKTIF
};

int main() {

    // Cara akses: Gunakan operator :: (scope resolution operator)
    StatusSiswa siswa_arfa = StatusSiswa::AKTIF;
    StatusGuru guru_khoir = StatusGuru::AKTIF;

    if (siswa_arfa == StatusSiswa::AKTIF) {
        std::cout << "Siswa telah aktif dalam satuan pendidikan" << endl;
    }

    cout << "Ukuran enum StatusSiswa " << sizeof(StatusSiswa) << " Byte" << endl;

    return 0;
}