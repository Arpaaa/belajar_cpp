#include <iostream>
#include <string>

using namespace std;

int main() {
    string word = "cat";

    // Menampilkan data string
    cout << word << endl;

    // Mengambil karakter berdasarkan index
    cout << "Index ke 0: " << word[0] << endl;
    cout << "Index ke 1: " << word[1] << endl;
    cout << "Index ke 2: " << word[2] << endl;

    // Mengubah karakter pada index
    word[1] = 'e'; // Gunakan tanda kutip 1 karena hanya mengubah 1 char
    cout << word << endl;

    // Menyambung (concatenation)
    string word_kedua = word + "ar";
    cout << word_kedua << endl;

    string word_ketiga = " membahana";
    word_kedua.append(word_ketiga);

    cout << word_kedua << endl;

    string word_keempat = "badai";
    word_kedua += ' ' + word_keempat;

    cout << word_kedua << endl;

    // mengecek apakah string kosong
    string teks_kosong = "";
    cout << teks_kosong.empty() << endl;

    // mengetahui panjang string (tanpa menghitng null terminator '\0')
    cout << word_kedua.length() << endl;

    return 0;
}