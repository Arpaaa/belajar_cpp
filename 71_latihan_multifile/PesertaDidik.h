#ifndef BELAJAR_CPP_PESERTADIDIK_H
#define BELAJAR_CPP_PESERTADIDIK_H

#define DATABASE_PATH "data_peserta_didik.bin"

#include <fstream>
#include <vector>

struct PesertaDidik {
    int pk;
    char NPSN[9];
    char nama[51];
    char jurusan[51];
};

void printData(const std::vector<PesertaDidik> &dataPesertaDidik);

void createPesertaDidik(std::fstream &file);
void readPesertaDidik(std::fstream &file);
void updatePesertaDidik(std::fstream &file);
void deletePesertaDidik(std::fstream &file);

#endif //BELAJAR_CPP_PESERTADIDIK_H
