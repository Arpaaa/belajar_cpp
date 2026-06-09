#include <iostream>
#include <string>

using namespace std;
// @formatter:off

// Struct adalah data yang dibentuk oleh beberapa data
// standar insudtri: didefnisikan di luar fungsi main() agar Global
// Struct defaultnya disimpan di stack (jika tanpa keyword new)

// Naming Convention Struct
// - PascalCase
// - Member Variabel: camelCase atau snake_case

// Karna CPU bekerja optimal pada kelipatan 4, 8, 16, ... byte maka jika ada struct dengan
// seperti berikut maka struct akan menambahkan padding (data kosong buatan)
// Contoh:
struct Contoh {
    char a; // 1 byte + 3 bytes padding
    int b;  // 4 byte
};          // Jika ditotal maka Contoh hanya memakan 5 byte, namun... karena untuk optimisasi
            // CPU akan lebih cepat membaca jika kelipatan 4, 8, dst. maka diantara
            // char dan int ditambahkan padding sebanyak 8 bytes.
            // Sehingga CPU jika inggin membaca fields b akan langsung melompat 4 bytes tanpa
            // melakukkan Misaligned Access untuk membaca int tersebut.

// Memori akan optimal jika alamat memori suatu variabel habis dibagi oleh ukuran variabel itu sendiri
// hukum tersebut disebut Naturally Aligned

// Karna padding akan ditambahkan diantara tipe data jika data tersebut bukan kelipatannya maka
// akan ditambahkan padding. sehingga urutan struct dapan mempengaruhi jumlah memori

// BURUK
struct Buruk {
    short a; // 2 bytes + 2 bytes padding
    int b;   // 4 bytes
    char c;  // 1 bytes + 3 bytes padding
    int d;   // 4 bytes
};  // Total :  16 bytes

// BAIK
struct Baik {
    int a;   // 4 bytes
    int b;   // 4 bytes
    short c; // 2 bytes
    char d;  // 1 bytes + 1 bytes padding untuk data selanjutnya
};  // Total : 12 bytes



struct Buah {       // Mendefinisikan struct
    string warna;   // Anggota variabel disebut Member Variables atau Fields
    float berat;
    int harga;
    string rasa;
};                  // Wajib diakhiri titik koma
// @formatter:on

int main() {
    cout << "Ukuran struck Buruk: " << sizeof(Buruk) << " bytes" << endl;
    cout << "Ukuran struck Baik: " << sizeof(Baik) << " bytes" << endl;

    cout << endl;

    Buah anggur;
    cout << "1. Anggur" << endl;
    cout << "-  Warna: " << anggur.warna << endl;
    cout << "-  Berat: " << anggur.berat << endl;
    cout << "-  Harga: " << anggur.harga << endl;
    cout << "-  Rasa : " << anggur.rasa << endl;
    cout << endl;

    // Teknik Dot Operator - objek.variabel = value
    anggur.warna = "merah";
    anggur.berat = 5.5f;
    anggur.harga = 50000;
    anggur.rasa = "manis asam";

    cout << "-  Warna: " << anggur.warna << endl;
    cout << "-  Berat: " << anggur.berat << endl;
    cout << "-  Harga: " << anggur.harga << endl;
    cout << "-  Rasa : " << anggur.rasa << endl;
    cout << endl;

    Buah jeruk;

    jeruk.warna = "orange";
    jeruk.berat = 90.6;
    jeruk.harga = 25000;
    jeruk.rasa = "asam";

    cout << "2. Jeruk" << endl;

    cout << "-  Warna: " << jeruk.warna << endl;
    cout << "-  Berat: " << jeruk.berat << endl;
    cout << "-  Harga: " << jeruk.harga << endl;
    cout << "-  Rasa : " << jeruk.rasa << endl;
    cout << endl;

    // Designated Initializer atau Aggregate Initialization - C++20
    // C++11 (Berdasarkan urutan)
    Buah apel = {"merah", 63.5, 30000, "manis"};

    cout << "2. Apel" << endl;

    cout << "-  Warna: " << apel.warna << endl;
    cout << "-  Berat: " << apel.berat << endl;
    cout << "-  Harga: " << apel.harga << endl;
    cout << "-  Rasa : " << apel.rasa << endl;
    cout << endl;

    // C++20 (Menyebutkan nama variabel langsung
    Buah manggis = {.warna = "ungu", .berat = 48.8, .harga = 15000, .rasa = "manis"};


    cout << "3. Manggis" << endl;

    cout << "-  Warna: " << manggis.warna << endl;
    cout << "-  Berat: " << manggis.berat << endl;
    cout << "-  Harga: " << manggis.harga << endl;
    cout << "-  Rasa : " << manggis.rasa << endl;
    cout << endl;

    Buah mangga = Buah{"Kuning", 78.6, 20000, "manis"};
    cout << "4. Mangga" << endl;

    cout << "-  Warna: " << mangga.warna << endl;
    cout << "-  Berat: " << mangga.berat << endl;
    cout << "-  Harga: " << mangga.harga << endl;
    cout << "-  Rasa : " << mangga.rasa << endl;
    cout << endl;

    return 0;
}
