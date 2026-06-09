#include <iostream>
#include <string>

using namespace std;

int main() {
    char word_satu[5] = {'k', 'u', 'n', 'c', 'i'}; // array char tidak bisa ditambah
    char word_dua[] = "mobil"; // sudah ada null terminator, namun size mutlak.

    string word_tiga("kucing"); // disebut Direct Initialization
    string nama = "arfa luthfi bintang mahardika ganteng keren"; // disebut Copy Initialization

    string teks_kosong;

    cout << "Ukuran word_satu " << sizeof(word_satu) << " bytes, dan isinya: ";
    cout << word_satu << endl; // Bisa menghasilkan char yang tidak diinginkan
    // karena cout bablas hinggga menemukan null terminator
    // atau nilai 0 pada memori, solusi berikan \0 (null
    // terminator) diakhir deretan char.
    cout << "Ukuran word_dua " << sizeof(word_dua) << " bytes, dan isinya: " << word_dua << endl;;
    cout << "Ukuran word_tiga " << sizeof(word_tiga) << " bytes, dan isinya: " << word_tiga << endl;
    cout << "Ukuran nama " << sizeof(nama) << " bytes, dan isinya: " << nama << endl;
    cout << "Ukuran teks_kosong " << sizeof(teks_kosong) << " bytes, dan isinya: " << teks_kosong << endl;

    string data;
    cout << "Masukan kata: ";

    cin >> data; // akan bermasalah jika input memiliki spasi (terpotong)
    cout << "Ukuran dari data " << sizeof(data) << " bytes, dan isinya: " << data << endl;

    /*
     * Semua string akan memiliki ukuran 32 bytes karena yang dicek oleh sizeof adalah
     * berapa besar memory yang digunakan untuk menyimpan struktur string tersebut,
     * yang terdiri dari Pointer Data, Size, Capacity beserta SSO.
     */

    string teks_panjang = "Ini adalah kalimat yang sanggat panjang sekali sampai memicu alokasi memori Heap!";

    cout << endl;
    cout << "Teks Kosong" << endl;
    cout << "Ukuran objeck di stack (sizeof): " << sizeof(teks_kosong) << " bytes" << endl;
    cout << "Jumlah karakter (length): " << teks_kosong.length() << " karakter" << endl;
    cout << "Kapasitas RAM dinamis (.capacity()): " << teks_kosong.capacity() << " byte" << endl;

    cout << endl;
    cout << "Teks Panjang" << endl;
    cout << "Ukuran objeck di stack (sizeof): " << sizeof(teks_panjang) << " bytes" << endl;
    cout << "Jumlah karakter (length): " << teks_panjang.length() << " karakter" << endl;
    cout << "Kapasitas RAM dinamis (.capacity()): " << teks_panjang.capacity() << " byte" << endl;
    return 0;
}
