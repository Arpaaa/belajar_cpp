#include <iostream>
#include <string>

int main() {
    /*
     * ============================
     *            TUPLE
     * ===========================
     * Tuple adalah kumpulan data heterogen dengana ukuran yang tetap.
     * Mirip seperti pair tapi ini lebih dari atau sama dengan 3 data heterogen.
     */

    /// Cara Mendefinisikan Tuple
    /// 1. Menggunakan Constructor
    std::tuple<int, int, std::string> siswa_1(1, 94, "Arfa Luthfi");

    /// 2. Menggunakan std::make_tuple(a, b ,c)
    auto siswa_2 = std::make_tuple(1, 90, "Bintang Mahardika");

    /// 3. Menggunakan Braces/Aggregate
    std::tuple<int, int, std::string> siswa_3 = {1, 92, "Jelita Nur"};

    /// Mengambil Nilai Tuple
    /// 1. Menggunakna std::get<index/tipe>(variabel_tuple)
    int id_siswa_1 = std::get<0>(siswa_1);
    int nilai_siswa_1 = std::get<1>(siswa_1);
    auto nama_siswa_1 = std::get<std::string>(siswa_1);

    std::cout << id_siswa_1 << " | " << nilai_siswa_1 << " | " << nama_siswa_1 << std::endl;

    /// 2. Menggunakan Structerd Binding
    auto [id_siswa_2, nilai_siswa_2, nama_siswa_2] = siswa_2;

    std::cout << id_siswa_2 << " | " << nilai_siswa_2 << " | " << nama_siswa_2 << std::endl;

    /// 3. Menggunakan std::tie
    int id_siswa_3, nilai_siswa_3;
    std::string nama_siswa_3;

    std::tie(id_siswa_3, nilai_siswa_3, nama_siswa_3) = siswa_3;

    std::cout << id_siswa_3 << " | " << nilai_siswa_3 << " | " << nama_siswa_3 << std::endl;

    /// Jika menggunakan tie dan hanya mengambil nilai tertentu, gunakan std::ignore
    std::tuple<int, int, std::string> siswa_4 = {4, 91, "Melani"};

    std::string nama_siswa_4;
    std::tie(std::ignore, std::ignore, nama_siswa_4) = siswa_4;

    std::cout << "\t " << nama_siswa_4 << std::endl;

    /*
     * Melakukan sort di tuple akan dilakukan secara berututan, dari index 0. Jika ada index 0 yang sama, maka akan
     * dibandingkan dengan index 1, jika tetap sama akan dibandingkan dengan index 3 dan seterusya.
     */


    return 0;
}