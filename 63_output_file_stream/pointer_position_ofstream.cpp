#include <iostream>
#include <fstream>
#include <string>

bool is_file_open(std::ofstream &file) {
    return (file.is_open()) ? true : false;
}

int main() {
    std::ofstream file;

    file.open("data6.txt",  std::ios::out | std::ios::ate); // Kalo pake append, seekp tidak berfungsi
    if (!is_file_open(file)) return -1;

    /// g = GET - ifstream
    /// p = PUT - ofstream

    // file << "\nHello, ini baris baru ditambahkan" << std::endl;;
    /// karena modenya append sehingga akan ditambakan diakhir file dan memangil endl yg memicu flush
    /// maka jika posisi kursor saat ini berada di akhir file.

    /// tellp - mengembalikan posisi saat ini dari put pointer.
    std::cout << file.tellp() << std::endl;

    /// seekp - Memaksa put pointer ke byte tertentu. karakter pertama dimulai dari 0 byte
    /// contoh: melompat ke karakter 75
    file.seekp(10);
    file << "Nama" << std::endl;


    return 0;
}
