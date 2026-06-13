#include <iostream>
#include <fstream>
#include <cstring>

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

int main() {
    fstream file;
    file.open("data.bin", ios::out | ios::in | ios::trunc | ios::binary);
    if (!is_file_open(file)) return -1;

    PesertaDidik siswa1, siswa2;

    strncpy(siswa1.NPSN, "00876543", sizeof(siswa1.NPSN));
    strncpy(siswa1.nama, "Arfa", sizeof(siswa1.nama));
    strncpy(siswa1.jurusan, "IPA", sizeof(siswa1.jurusan));

    strncpy(siswa2.NPSN, "00654321", sizeof(siswa2.NPSN));
    strncpy(siswa2.nama, "Kadek", sizeof(siswa2.nama));
    strncpy(siswa2.jurusan, "IPS", sizeof(siswa2.jurusan));

    file.write(reinterpret_cast<char*>(&siswa1), sizeof(PesertaDidik));
    file.write(reinterpret_cast<char*>(&siswa2), sizeof(PesertaDidik));
    // file.write(reinterpret_cast<char*>(&siswa3), sizeof(PesertaDidik));

    file.close();

    return 0;
}
