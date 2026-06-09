#include <string>
#include <iostream>

using namespace std;

int main() {
    int umur = 0;
    string namaLengkap;

    cout << "Masukan umur: ";
    cin >> umur;

    cout << "Masukan nama lengkap: ";
    getline(cin, namaLengkap);

    cout << "Nama: " << namaLengkap  << "\nUmur: " << umur << endl;

    // getline akan seperti terlompati karena input buffer tersisa \n karena cin tidak membersihkan
    // \n secara otomatis

    // Solusi: Gunakan std::cin.ignore()
    cout << "Masukan umur: ";
    cin >> umur;

    cin.ignore();

    cout << "Masukan nama lengkap: ";
    getline(cin, namaLengkap);

    cout << "Nama: " << namaLengkap  << "\nUmur: " << umur << endl;

    return 0;
}