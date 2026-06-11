#include <iostream>
#include <fstream>

int main () {
    /// File Mode Flag          Arti/Perilaku di Storage.
    /// std::ios::out           Membuka file untuk menulis data (default untuk ofstream).
    /// std::ios::trunc              Mengosongkan isi file mnejadi 0 byte jika file sudah ada (Default bersama ios::out).
    /// std::ios::app                Append (Menambahkan) data. Menambah tanpa menghapus data lama.
    /// std::ios::ate                At The End. Membuka file lalu meletakan kursor ke akhir file, tapi posisi kursor
    ///                         dapat pindah-pindah melalui seekp
    /// std::ios::binary             Membuka file dalam bentuk Biner mentah, bukan format teks/ASCII biasa
    /// std::ios::in                 Membuka file untuk membaca data (Default untuk ifstream)

    /// Menggabungkan flag dengan bitwise OR (|)
    /// Contoh: Membuka file dengan mode biner dan append
    // std::ofstream myFile("file.bin", std::ios::out | std::ios::binary | std::ios::app);

    /// Karena default adalah out dan trunc
    /// Maka ia akan menghapus dan menulis file tersbut sehingga dapat menghapus data lama.
    /// Dengan itu dapat dilakukan append

    std::ofstream file("data5.txt", std::ios::app); // std::ios:: sudah masuk otomatis

    if (!file.is_open()) {
        std::cerr << "Error: Tidak dapat membuka file" << std::endl;
        return -1;
    }

    file << "Ini data baru\n";

    file.close();

    return 0;
}