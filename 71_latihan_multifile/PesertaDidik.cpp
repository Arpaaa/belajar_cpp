#include "PesertaDidik.h"
#include "utils.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>
#include <filesystem>

PesertaDidik readData(std::fstream &file, const size_t pos) {
    file.open(DATABASE_PATH, std::ios::in | std::ios::binary);
    file.clear();

    file.seekg(static_cast<std::streamoff>(pos * sizeof(PesertaDidik)), std::ios::beg);

    PesertaDidik result{};
    file.read(reinterpret_cast<char *>(&result), sizeof(PesertaDidik));

    file.close();

    return result;
}

size_t getDataSize(std::fstream &file) {
    file.open(DATABASE_PATH, std::ios::in | std::ios::binary);
    file.clear();

    file.seekg(0, std::ios::beg);
    const std::streampos startPos = file.tellg();

    file.seekg(0, std::ios::end);
    const std::streampos endPos = file.tellg();

    file.close();

    return ((endPos - startPos) / sizeof(PesertaDidik));
}

std::vector<PesertaDidik> getAllData(std::fstream &file) {
    file.open(DATABASE_PATH, std::ios::in | std::ios::binary);
    file.clear();

    std::vector<PesertaDidik> result;
    const size_t dataSize = getDataSize(file); // FIXME: Kalo error coba buka tutup file

    for (size_t i = 0; i < dataSize; i++) {
        result.push_back(readData(file, i));
    }

    file.close();

    return result;
}

void printData(const std::vector<PesertaDidik> &dataPesertaDidik) {
    std::ios backup(nullptr);
    backup.copyfmt(std::cout);

    std::cout << std::string(75, '=') << '\n';

    std::cout << std::left << std::setw(6) << "No."
            << std::left << std::setw(15) << "Primary Key"
            << std::left << std::setw(30) << "Nama"
            << std::left << std::setw(30) << "Jurusan"
            << "\n";

    std::cout << std::string(75, '-') << '\n';
    for (size_t i = 0; i < dataPesertaDidik.size(); i++) {
        const PesertaDidik data = dataPesertaDidik.at(i);

        std::cout << std::left << std::setw(6) << (i + 1)
                << std::left << std::setw(15) << data.pk
                << std::left << std::setw(30) << data.nama
                << std::left << std::setw(30) << data.jurusan
                << "\n";
    };
    std::cout << std::string(75, '=') << std::endl;;

    std::cout.copyfmt(backup);
}

void writeData(std::fstream &file, const size_t &pos, PesertaDidik &data) {
    // file.open(DATABASE_PATH, std::ios::out | std::ios::binary | std::ios::in);
    // file.clear();

    file.seekp(static_cast<std::streamoff>(pos * sizeof(PesertaDidik)), std::ios::beg);
    file.write(reinterpret_cast<char *>(&data), sizeof(PesertaDidik));

    // file.close();
}

void createPesertaDidik(std::fstream &file) {
    PesertaDidik newData{};
    const size_t dataSize = getDataSize(file);

    newData.pk = static_cast<int>(dataSize) + 1;

    std::cout << "NPSN: ";
    std::cin.getline(newData.NPSN, sizeof(newData.NPSN));
    checkAndCleanCin();

    std::cout << "Nama Peserta Didik: ";
    std::cin.getline(newData.nama, sizeof(newData.nama));
    checkAndCleanCin();

    std::cout << "Jurusan: ";
    std::cin.getline(newData.jurusan, sizeof(newData.jurusan));
    checkAndCleanCin();

    std::cout << "New data created: " << std::endl;
    printData({newData});

    bool isConfirmed = confirmation("Do you want to insert this data to  database? [Y/n]", true);

    if (!isConfirmed) return;

    writeData(file, dataSize, newData);
}

void readPesertaDidik(std::fstream &file) {
    std::cout << "\nTotal data: " << getDataSize(file) << std::endl;
    std::vector<PesertaDidik> dataPesertaDidik = getAllData(file);
    printData(dataPesertaDidik);
}

PesertaDidik selectPesertaDidik(std::fstream &file, const std::string &actionName) {
    readPesertaDidik(file);

    size_t dataSize = getDataSize(file);

    int inputNumber;

    while (true) {
        std::cout << "Select (number) data will be " << actionName << ": ";
        std::cin >> inputNumber;

        if (std::cin.fail()) {
            std::cout << "Please input number of data will be " << actionName << "." << std::endl;
            checkAndCleanCin();
            continue;
        }

        if (inputNumber < 0 || inputNumber > dataSize) {
            std::cout << "Number out of range." << std::endl;
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
    }

    return readData(file, inputNumber - 1);
}

void updatePesertaDidik(std::fstream &file) {
    PesertaDidik dataWantToUpdate = selectPesertaDidik(file, "update");

    std::cout << "Data will be update: " << std::endl;;
    printData({dataWantToUpdate});

    std::cout << "NPSN: ";
    std::cin.getline(dataWantToUpdate.NPSN, sizeof(dataWantToUpdate.NPSN));
    checkAndCleanCin();

    std::cout << "Nama Peserta Didik: ";
    std::cin.getline(dataWantToUpdate.nama, sizeof(dataWantToUpdate.nama));
    checkAndCleanCin();

    std::cout << "Jurusan: ";
    std::cin.getline(dataWantToUpdate.jurusan, sizeof(dataWantToUpdate.jurusan));
    checkAndCleanCin();

    std::cout << "New data created: " << std::endl;
    printData({dataWantToUpdate});

    if (!confirmation("Do you want to continue to update this data? (y/N)", false)) {
        std::cout << "Update data canceled." << std::endl;
        return;
    }

    writeData(file, dataWantToUpdate.pk - 1, dataWantToUpdate);
}

void deletePesertaDidik(std::fstream &file) {
    PesertaDidik dataWantToDelete = selectPesertaDidik(file, "delete");
    size_t dataSize = getDataSize(file);

    // 1. Buat temp file
    std::fstream tempFile("temp.dat", std::ios::out | std::ios::trunc | std::ios::in | std::ios::binary);

    file.open(DATABASE_PATH, std::ios::in | std::ios::binary);

    size_t tempPos = 0;
    for (size_t i = 0; i < dataSize; i++) {
        if (i == (dataWantToDelete.pk - 1)) continue;
        PesertaDidik dataToMove = readData(file, i);

        writeData(tempFile, tempPos++, dataToMove);
    }

    file.close();
    tempFile.close();

    std::filesystem::remove(DATABASE_PATH);
    std::filesystem::rename("temp.dat", DATABASE_PATH);
}
