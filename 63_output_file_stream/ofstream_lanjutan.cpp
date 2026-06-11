#include <iostream>
#include <fstream>

int main() {
    /// std::ofstream namaObject
    std::ofstream outputFile;

    /// Untuk membuka file:
    /// namaObject("file_name atau file_path", [File Mode Flag])
    outputFile.open("data3.txt");
    /// Jika file sebelumnya belum ada maka akan dibuat

    /// Menutup file
    outputFile.close();


    /// Cara yang baik untuk menulis file ialah memeriksa terlebih dahulu apakah file tersebut dapat dibuka
    /// atau tidak agar program tidak crash saat file tersebut tidak dapat dibuka
    /// Contoh:

    /// Ganti "data4.txt" dengan "data4_locked.txt"
    outputFile.open("data4.txt");

    /// Periksa apakah output file dapat diakses?
    if (!outputFile.is_open()) {
        std::cerr << "Error: File gagal dibuka ataau dibuat!\n";
        return -1;
    }

    // Jika tidak error, maka bisa dilanjutkan sesuka hati!
    outputFile << "Ini stream, akan dimasukan ke buffer dulu\n";
    outputFile << "Baris tadi dan ini akan tertahan di RAM (buffer) hingga flush terjadi\n";
    std::cout << "File berhasil ditulis" << std::endl;

    outputFile.close();

    /// Flush akan terjadi oleh:
    /// - File ditutup close()
    /// - buffer penuh
    /// - pemanggilan std::flush atau std::endl
    /// - Program berhenti (Terminasi), ketika program selesai dengan normal
    ///   atau mengalami crash tapi tidak jika HARD CRASH (Komputer Mati).

    return 0;
}