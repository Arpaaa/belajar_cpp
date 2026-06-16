#include <iostream>
#include <string>  // berisi stoi

using namespace std;

bool is_number_only(string text);

int main() {
    /*
     * stoi (String To Integer) adalah fungsi untuk mengonversi string menjadi integer.
     * Sejak C++11
     */

    /// Basic Syntax
    /// int stoi (const string &str, size_t *idx = 0, int base = 10);
    ///
    /// - str : string yang mau diubah jadi angka
    /// - idx : pointer ke object size_t yg akan menyimpan index karakter setelah angka (optinoal)
    /// - base: basis angka yang digunakan (misalnya 10 untuk desimal). (optional)
    ///
    /// Harus diperhatikan, jika angka dalam string cukup panjang melebihi batas tipe data int,
    /// maka stoi akan melemparkan error out_of_range

    int a = stoi("12345678");
    cout << a << endl;

    // int b = stoi("12830941804981048"); // Error out_of_range
    // cout << b << endl;

    string teks =  "150cm";
    size_t pos_berhenti;

    int angka = stoi(teks, &pos_berhenti);
    /// pos pake & alias alamat, karena pada dasarnya di CPP, fungsi hanya dapat
    /// mengembalikan (return) 1 data saja.

    cout << "Angka : " << angka << endl;
    cout << "Posisi berhenti di indeks: " << pos_berhenti << endl;
    cout << "Teks tersisa : " << teks.substr(pos_berhenti) << endl;
    cout << "Teks utuh : " << teks << endl;


    // Contoh penerapan lain:
    // Fungsi mendeteksi apakah ada karakter selain angka atau tidak

    cout << boolalpha;
    cout << is_number_only("12390834")  << endl;
    cout << is_number_only("13908301fjas") << endl;

    return 0;
}

bool is_number_only(string text) {
    size_t stop_pos;

    stoi(text, &stop_pos);

    return ((stop_pos == text.length())); // true jika semua berhasil terkonversi
}
