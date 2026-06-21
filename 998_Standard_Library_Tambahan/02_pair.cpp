#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void cetakVectorOfPair(const std::vector<std::pair<int, int>> &data) {
    for (const auto d : data) {
        std::cout << d.first << " " << d.second << "\n";
    }
}

int main() {
    /*
     * =============================
     *              PAIR
     * =============================
     * Pair adalah STL yang menyediakan sebuah cara untuk menyimpan dua data objek heterogen sebagai satu kesatuan
     *
     * Menggabungkan dua nilai. Pair juga sering digunakan untuk menyimpan kordinat (x, y)
     * atau mengurutkan data berdasarkan variabel tapi variabel pasangannya tidak boleh hilang.
     *
     */

    /// Membuat pair
    /// 1. Menggunakan Constructor
    std::pair<int, std::string> siswa_1(1, "Arfa Luthfi");

    /// 2. Menggunakan std::make_pair(a, b)
    auto siswa_2 = std::make_pair(2, "Bintang Mahardika");

    /// 3. Menggunakan braces/aggregate {a, b}
    std::pair<int, std::string> siswa_3 = {3, "Jelita Nur"};

    /// Mengambil
    /// 1. Mengambil pair dengan std::get<index>(variabel_pair)
    std::cout << std::get<0>(siswa_1) << ", " << std::get<1>(siswa_1) << std::endl;

    /// 2. Mengambil pair dengan std::get<type>(variabel_pair)
    std::cout << std::get<int>(siswa_2) << ", " << std::get<const char*>(siswa_2) << std::endl;
    /// Kalo tipenya tidak ada, maka akan error.

    /// 3. Mengambil dengan .first dan .second
    std::cout << siswa_3.first << ", " << siswa_3.second << std::endl;

    /// 4. Structered Binding
    auto [index, nama] = siswa_1;
    std::cout << index << ", " << nama << std::endl;


    /// Menambahkan ke vector
    std::vector<std::pair<int, int>> data = {{2, 3}, {5, 9}};

    std::pair<int, int> d1 = {1, 2};
    data.push_back(d1);              /// Melakukan Copy Constructor

    data.push_back({1, 3}); /// Melakukan Copy Constructor

    data.emplace_back(2, 1);    /// Tidak melakukan Copy Constructor, melainkan langsung in-place


    /// Melakukan sort pada vector of pair.
    /// Secara default, std::vector sudah mengenali pair dan akan membandingkan:
    /// - Elemen .first terlebih dahulu.
    /// - Jika .first sama, baru akan membandingkan .second
    std::cout << std::endl;
    cetakVectorOfPair(data);

    std::sort(data.begin(), data.end());

    std::cout << std::endl;
    cetakVectorOfPair(data);

    return 0;
}