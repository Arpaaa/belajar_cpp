#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArrayInt(const std::array<int, arraySize> &arrayRef) {
    std::cout << "Array: ";
    for (const int &a: arrayRef) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

void printArrayChar(const std::array<char, arraySize> &data) {
    std::cout << "Array: ";
    for (const char &a: data) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

void acakArrayInt(std::array<int, arraySize> &data) {
    data = {9, 4, 6, 7, 8, 1, 3, 2, 5, 0};
}

void acakArrayChar(std::array<char, arraySize> &data) {
    data = {'c', 'q', 'x', 'b', 'p', 'g', 't', 'm', 'w', 'y'};
}

int main() {
    std::array<int, arraySize> angka = {9, 4, 6, 7, 8, 1, 3, 2, 5, 0};
    std::array<char, arraySize> huruf = {'c', 'q', 'x', 'b', 'p', 'g', 't', 'm', 'w', 'y'};

    printArrayInt(angka);
    printArrayChar(huruf);

    std::cout << std::endl;

    /* sort - introsort (introspective sort)
     *      > tidak menggunakan satu algoritma tunggal, dan dapat berganti algoritma
     *        di tengah jalan tergantung kondisi data.
     *      > mnggabungkan 3 algoritma sekaligus: Quick Sort, Heap Sort, Insertion Sort.
     *      > Unstable, jika dua element bernilai sama, posisi relatif bisa tertukar.
     */

    //        alamat awal, alamat akhir
    std::sort(angka.begin(), angka.end());
    printArrayInt(angka);

    std::sort(huruf.begin(), huruf.end());
    printArrayChar(huruf);
    std::cout << std::endl;

    /*
     * stable_sort
     *      > Stabil, menjamin elemen dengan nilai sama tidak akan tertukar posisi relatifnya.
     *      > Biasanya menggunakan Merge Sort.
     *      > Merge Sort membutuhkan memori tambahan (extra buffer memory).
     */
    acakArrayInt(angka);
    acakArrayChar(huruf);

    std::stable_sort(angka.begin(), angka.end());
    printArrayInt(angka);

    std::stable_sort(huruf.begin(), huruf.end());
    printArrayChar(huruf);

    std::cout << std::endl;
    /*
     * Partial Sort
     *      > Hanya mengurutkan sebagian data teratas sesuai jumlah yang diminta.
     *      > Menggunakan heap sort.
     *      > Studi Kasus: Jika ada 1 juta data user, namun hanya ingin mengambil 5 skor
     *        tertinggi, sort sebagian lebih cepat daripada ngesort semua.
     *      > Penggunaan: partial_sort(address_awal, sampai address/index berapa, address_akhir)
     */
    acakArrayInt(angka);
    acakArrayChar(huruf);
    //                              Hanya mengambil tiga nilai terurut
    std::partial_sort(angka.begin(), angka.begin() + 3, angka.end());
    printArrayInt(angka); // Output: 0 1 2 9 8 7 6 4 5 3. yang berurut hanya 0, 1, dan 2 (tiga nilai pertama)

    std::partial_sort(huruf.begin(), huruf.begin() + 3, huruf.end());
    printArrayChar(huruf);

    std::cout << std::endl;

    // Descending Sort, gunakan rbegin, rend (reverse begin, reverse end)
    acakArrayInt(angka);
    acakArrayChar(huruf);

    // sort
    std::sort(angka.rbegin(), angka.rend());
    printArrayInt(angka);

    std::sort(huruf.rbegin(), huruf.rend());
    printArrayChar(huruf);

    std::cout << std::endl;

    // stable_sort
    acakArrayInt(angka);
    acakArrayChar(huruf);

    std::stable_sort(angka.rbegin(), angka.rend());
    printArrayInt(angka);

    std::stable_sort(huruf.rbegin(), huruf.rend());
    printArrayChar(huruf);

    std::cout << std::endl;

    // partial_sort - 3 angka terkecil pertama berada di paling belakang.
    acakArrayInt(angka);
    acakArrayChar(huruf);

    std::partial_sort(angka.rbegin(), angka.rbegin() + 3, angka.rend());
    printArrayInt(angka);

    std::partial_sort(huruf.rbegin(), huruf.rbegin() + 3, huruf.rend());
    printArrayChar(huruf);

    return 0;
}