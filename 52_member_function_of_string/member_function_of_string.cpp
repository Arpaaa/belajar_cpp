#include <iostream>
#include <string>

using namespace std;

int main() {
    string kalimat_1 = "Hallo, perkenalkan nama saya Arfa Luthfi";
    string kalimat_2 = "Saya sedang belajar C++ dan saya senang";
    string teks_kosong = "";

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;
    cout << endl;

    // length atau size - keduanya sama persis (sinonim)
    cout << "Panjang kalimat 1: " << kalimat_1.length() << " karakter" << endl;
    cout << "Panjang kalimat 1: " << kalimat_1.size() << " karakter" << endl;
    cout << endl;

    // empty - cek apakah string kosong, true jika kosong (length == 0)
    cout << "Apakah kalimat 2 kosong: " << kalimat_2.empty() << endl;
    cout << "Apakah teks_kosong kosong: " << teks_kosong.empty() << endl;
    cout << endl;

    // operator[] - mengambil char dari index tertentu (mengembalikan char)
    cout << "Index ke-0 dari kalimat 1: " << kalimat_1[0] << endl;

    // at - mirip yang barusan tapi lebih safety dari error out-of-bounds karena akan melempar error exception
    cout << "Index ke-1 dari kalimat 2: " << kalimat_2.at(1) << endl;
    cout << endl;

    // operator+= atau append
    kalimat_1 += " Bintang";
    kalimat_1.append("Mahardika", 3);
    kalimat_2.append(" Belajar");
    kalimat_2.append(3, '!'); // Memasukan tiga tanda !

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;
    cout << endl;

    // substr - mengambil bagian string
    cout << "Substring index ke 0 dan 5 char setelahnya: " << kalimat_1.substr(0, 5);
    cout << endl;

    // clear - menghapus seluruh isi string tetapi tetap mempertahankan kapasitas memori lamanya.
    kalimat_1.clear();

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;
    cout << endl;

    kalimat_1.append("Hallo, perkenalkan nama saya Arfa Luthfi");

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;
    cout << endl;

    // insert - menyisipkan kata di index tertentu, karakter selanjutnya bergeser ke kanan.
    kalimat_1.insert(5, " semua!");

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;
    cout << endl;

    // erase - menghapus karakter sebanyak count dimulai dari indeks pos.
    // erase(0, 3) menghapus 3 huruf pertama di depan.
    kalimat_1.erase(5, 7);

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;
    cout << endl;

    // replace - menghapus karakter dan menambahkan karakter baru.
    kalimat_1.replace(19, 4, "semuanya,");

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;
    cout << endl;

    // find - mencari indeks pertama string dari arah kiri ke kanan.
    cout << "Substring C++ berada di index: " << kalimat_2.find("C++") << endl;

    // rfind - sama seperti find tapi dari arah kanan ke kiri.
    cout << "Substring Arfa berada di index: " << kalimat_1.find("Arfa") << endl;
    cout << endl;

    // find_first_of - mencari indeks pertama dari salah satu karakter dari string yang dimasukan
    cout << "Huruf vokal pertama berada di index: " << kalimat_2.find_first_of("aiueo") << endl;

    // find_last_of - seperti tadi tapi dari arah belakang
    cout << "Huruf vokal terakhir berada di index: " << kalimat_2.find_last_of("aiueo") << endl;
    cout << endl;

    // c-str - mengembalikan pointer array const char* mentah lengkap dengan null terminator.
    //         digunakan jika ingin menggunakan library yang belum support std:string
    const char* rawDataKalimat1 = kalimat_1.c_str();
    cout << rawDataKalimat1 << endl; // jadi sebaris karena char.
    cout << endl;

    // capacity - mengembalikan ukuran memori dinamis yang saat ini dipegang oleh string
    cout << "Kapasitas kalimat 1: " << kalimat_1.capacity() << " bytes" << endl;
    cout << endl;

    // reserve - memesan heap memori
    kalimat_1.reserve(1000); // dalam byte
    cout << "Kapasitas kalimat 1: " << kalimat_1.capacity() << " bytes" << endl;
    cout << endl;

    // shrink_to_fit - mengembalikan sisa memori di heap yang nganggur
    kalimat_1.shrink_to_fit();
    cout << "Kapasitas kalimat 1: " << kalimat_1.capacity() << " bytes" << endl;
    cout << endl;


    return 0;
}