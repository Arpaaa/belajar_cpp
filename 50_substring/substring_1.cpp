#include <iostream>
#include <string>

using namespace std;

int main() {
    string kalimat_1 = "Hallo, perkenalkan nama saya Arfa Luthfi";
    string kalimat_2 = "Saya sedang belajar C++ dan saya senang";

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;

    // Substring, mengambil bagian dari stringg
    cout << kalimat_1.substr(0, 5) << endl;

    // Mencari posisi dari substring
    // Untuk memeriksa apakah index ditemukan atau tidak, gunakan perbandingan degan std::string::npos
    cout << kalimat_1.find("Arfa") << endl;
    cout << kalimat_1.substr(29, 4) << endl;

    int a = kalimat_1.find("na");
    cout << a << endl;
    cout << kalimat_1.find("na", a + 1) << endl; // Mulai mencari a + 1 = 12 + 1 = 13
    cout << kalimat_1.find("na", 13) << endl;

    // Mencari posisi dari belakang
    cout << kalimat_2.rfind("ang") << endl;

    return 0;
}
