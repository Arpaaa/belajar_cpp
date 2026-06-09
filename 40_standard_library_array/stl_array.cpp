#include <iostream>
#include <array>

using namespace std;

int main() {
    // Membuat array dengan STL
    // array<int, jumlah_array> nama_array;
    array<int, 10> nilai;

    for (int i = 0; i <= 4; i++) {
        nilai[i] = i;
        cout << "nilai [" << i << "] = " << nilai[i] << " address: " << &nilai[i];
        cout << endl;
    }

    // begin - Address awal dari array
    cout << "Address awal: " << nilai.begin() << endl;

    // end - Address akhir (batas akhir, bukan address element terkahir) dari array
    cout << "Address akhir: " << nilai.end() << endl;

    // at - nilai dengan index + lebih aman jika index diluar batas (akan memunculkan
    //      exception yang bisa ditankap oleh try-catch)
    cout << "Nilai ke-2: " << nilai.at(2) << endl;
    // cout << "Nilai ke-(-1) " << nilai.at(-1) << endl; error out of range

    // front - mengambil element pertama
    cout << "Element pertama: " << nilai.front() << endl;

    // back - mengambil element terakhir
    cout << "Element terakhir: " << nilai.back() << endl;

    // data - mengembalikan pointer mentah type_data* yang menunjuk ke element pertama.
    int *ptrNilai = nilai.data();
    cout << "Address alamat pertama/pointer array: " << ptrNilai << endl;

    // empty - mengecek apakah array kosong (mengembalikan boolean)
    cout << "Apakah array nilai kosong: " << nilai.empty() << endl;

    // size - Melihat ukuran array
    cout << "Jumlah element array nilai: " << nilai.size() << endl;

    // max_size - mengetahui berapa jumlah elemen maksimal yang bisa ditampung
    cout << "Maksimal jumlah element dari array nilai: " << nilai.max_size() << endl;

    // fill - mengisi semua element di dalam array dengan suatu nilai yang sama
    nilai.fill(100);
    for (int i = 0; i <= nilai.size() - 1; i++) {
        cout << nilai[i] << " ";
    }
    cout << endl;

    // swap - menukar seluruh isi array yang memiliki tipe data dan ukuran sama persis.
    array<int, 5> a = {1, 2, 3, 4, 5};
    array<int, 5> b = {6, 7, 8, 9, 10};
    a.swap(b);
    for (int i = 0; i <= a.size() - 1 ; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i <= b.size() - 1; i++) {
        cout << b[i] << " ";
    }

    // cbegin, cend, rbegin, rend. crbegin, crend - advance. nanti aja belajarnya hehe.

    return 0;
}
