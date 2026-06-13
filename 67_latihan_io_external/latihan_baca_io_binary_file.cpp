#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct PesertaDidik {
    char NPSN[9];
    char nama[50];
    char jurusan[50];
    //
    // PesertaDidik() : NPSN(0), nama("Unknown"), jurusan("Unknown") {
    // }
    //
    // PesertaDidik(int &NPSN, string &nama, string &jurusan) : NPSN(NPSN), nama(nama), jurusan(jurusan) {
    // }
};

bool is_file_open(fstream &inputFileRef) {
    if (!inputFileRef.is_open()) {
        std::cerr << "Error: tidak dapat membuka file" << std::endl;
        return false;
    }

    return true;
}

PesertaDidik getSiswa(const int &posisi, fstream &file) {
    PesertaDidik dataBaca;

    file.seekp(posisi * sizeof(PesertaDidik));

    file.read(reinterpret_cast<char*>(&dataBaca), sizeof(PesertaDidik));

    return dataBaca;
}

int main() {
    fstream file;
    file.open("data.bin", ios::in | ios::binary);
    if (!is_file_open(file)) return -1;

    PesertaDidik data1 = getSiswa(0, file);
    cout << data1.NPSN << endl;
    cout << data1.nama << endl;
    cout << data1.jurusan << endl;

    PesertaDidik data2 = getSiswa(1, file);
    cout << data2.NPSN << endl;
    cout << data2.nama << endl;
    cout << data2.jurusan << endl;

    file.close();

    return 0;
}