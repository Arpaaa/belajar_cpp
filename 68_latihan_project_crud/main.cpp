#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <limits>
#include <filesystem>
#include <cstring>
#include <vector>
#include <string_view>

const std::filesystem::path DATABASE_PATH = "data.bin";

struct PesertaDidik {
    size_t pk; // Primary Key
    char NPSN[9]{};
    char nama[51]{};
    char jurusan[51]{};

    PesertaDidik() {
        std::memset(this, 0, sizeof(PesertaDidik));
    }

    PesertaDidik(const char *NPSN, const char *nama, const char *jurusan) {
        std::memset(this, 0, sizeof(PesertaDidik)); // Memastikan bahwa struct benar2 kosong

        strncpy(this->NPSN, NPSN, sizeof(this->NPSN));
        strncpy(this->nama, nama, sizeof(this->nama));
        strncpy(this->jurusan, jurusan, sizeof(this->jurusan));

        // Isi char terakhir dengan null terminator
        this->NPSN[sizeof(this->NPSN) - 1] = '\0';
        this->nama[sizeof(this->nama) - 1] = '\0';
        this->jurusan[sizeof(this->jurusan) - 1] = '\0';
    }
};

// Handler
void handleShowData(std::fstream &file);

void handleInsertData(std::fstream &file);

void handleUpdateData(std::fstream &file);

void handleDeleteData(std::fstream &file);

// Logic
void checkDatabaseExist();

void writeData(std::fstream &file, const size_t &pos, PesertaDidik &newData);

PesertaDidik readData(std::fstream &file, const size_t &pos);

size_t getDataSize(std::fstream &file);

// Utils
void printMenu();

int getOption();

bool confirmation(const std::string &text);

void checkAndCleanCin();

void printAllData(const std::vector<PesertaDidik> &dataRef);

void cleanCin();

enum class Option { SHOW = 1, CREATE, UPDATE, DELETE, EXIT };

int main() {
    checkDatabaseExist();

    int userInput = getOption();

    std::fstream file;
    file.open(DATABASE_PATH, std::ios::binary | std::ios::out | std::ios::in);

    // TODO: Melakukan flush ketika handle telah selesai

    while (static_cast<Option>(userInput) != Option::EXIT) {
        switch (static_cast<Option>(userInput)) {
            case Option::SHOW:
                handleShowData(file);
                break;
            case Option::CREATE:
                if (!confirmation("Do you want to continue to insert new data? (y/n): ")) break;
                handleInsertData(file);
                break;
            case Option::UPDATE:
                handleUpdateData(file);
                break;
            case Option::DELETE:
                handleDeleteData(file);
                break;
            default:
                std::cout << "Action invalid" << std::endl;
                break;
        }

        if (!confirmation("Do you want to continue CRUD action? (y/n): ")) return 0;
        userInput = getOption();
    }

    file.close();

    return 0;
}

// -------------------------------------------------
// Handlers

void handleShowData(std::fstream &file) {
    std::vector<PesertaDidik> dataPesertaDidik;

    size_t pos = 0;
    while (true) {
        PesertaDidik pd = readData(file, pos);

        if (file.eof() || !file) break;

        dataPesertaDidik.push_back(pd);
        pos++;
    }

    std::cout << "There are " << dataPesertaDidik.size() << " data." << std::endl;

    file.clear();
    file.seekg(0, std::ios::beg);

    printAllData(dataPesertaDidik);
}

void handleInsertData(std::fstream &file) {
    PesertaDidik newData;
    size_t dataSize = getDataSize(file);

    newData.pk = dataSize + 1;

    std::cout << "Inserting new data \n";

    std::cout << "NPSN: ";
    std::cin.getline(newData.NPSN, sizeof(newData.NPSN));
    checkAndCleanCin();

    std::cout << "Nama Peserta Didik: ";
    std::cin.getline(newData.nama, sizeof(newData.nama));
    checkAndCleanCin();

    std::cout << "Jurusan: ";
    std::cin.getline(newData.jurusan, sizeof(newData.jurusan));
    checkAndCleanCin();

    writeData(file, newData.pk, newData);
}

void handleUpdateData(std::fstream &file) {
    handleShowData(file);

    PesertaDidik updatePesertaDidik;

    size_t number;
    std::cout << "Select (number) to update: ";
    std::cin >> number;
    checkAndCleanCin();

    size_t totalData = getDataSize(file);

    if (number < 1 || number > totalData) {
        std::cout << "Number is not valid" << std::endl;
        return;
    }

    updatePesertaDidik = readData(file, number - 1);

    std::cout << "Data will be update: " << std::endl;
    std::cout << "NPSN    : " << updatePesertaDidik.NPSN << std::endl;
    std::cout << "Nama    : " << updatePesertaDidik.nama << std::endl;
    std::cout << "Jurusan : " << updatePesertaDidik.jurusan << std::endl;

    if (!confirmation("Do you want to continue to update this data? (y/n): ")) return;

    std::cout << "Please input new value: " << std::endl;

    std::cout << "NPSN: ";
    std::cin.getline(updatePesertaDidik.NPSN, sizeof(updatePesertaDidik.NPSN));
    checkAndCleanCin();

    std::cout << "Nama Peserta Didik: ";
    std::cin.getline(updatePesertaDidik.nama, sizeof(updatePesertaDidik.nama));
    checkAndCleanCin();

    std::cout << "Jurusan: ";
    std::cin.getline(updatePesertaDidik.jurusan, sizeof(updatePesertaDidik.jurusan));
    checkAndCleanCin();

    writeData(file, number, updatePesertaDidik);
}

void handleDeleteData(std::fstream &file) {
    handleShowData(file);
    file.clear();

    size_t totalData = getDataSize(file);

    if (totalData == 0) {
        std::cout << "There is not data to delete" << std::endl;
        return;
    }

    size_t numberToDelete;
    std::cout << "Select (number) to delete: ";
    std::cin >> numberToDelete;
    checkAndCleanCin();

    if (numberToDelete < 1 || numberToDelete > totalData) {
        std::cout << "Number is not valid" << std::endl;
        return;
    }

    PesertaDidik dataToDelete = readData(file, numberToDelete - 1);
    std::cout << "Data will be delete: " << std::endl;
    std::cout << "NPSN    : " << dataToDelete.NPSN << std::endl;
    std::cout << "Nama    : " << dataToDelete.nama << std::endl;
    std::cout << "Jurusan : " << dataToDelete.jurusan << std::endl;

    if (!confirmation("\nAre you sure to delete this data? (y/n): ")) {
        std::cout << "Delete data was aborted" << std::endl;
        return;
    }

    std::fstream tempFile("temp.dat", std::ios::out | std::ios::binary | std::ios::trunc);
    if (!tempFile.is_open()) {
        std::cerr << "Failed to create temp file" << std::endl;
        return;
    }

    size_t tempPos = 1;
    for (size_t i = 0; i < totalData; i++) {
        if (i == (numberToDelete - 1)) continue;

        PesertaDidik dataToKeep = readData(file, i);
        writeData(tempFile, tempPos++, dataToKeep);
    }

    file.close();
    tempFile.close();

    std::filesystem::remove(DATABASE_PATH);
    std::filesystem::rename("temp.dat", DATABASE_PATH);

    file.open(DATABASE_PATH, std::ios::out | std::ios::in | std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Failed to re-open database file after deleting data" << std::endl;
        return;
    }

    std::cout << "\nData successfully deleted" << std::endl;
    handleShowData(file);
}

// void handleDeleteData(std::fstream &file) {
//     handleShowData(file);
//     file.clear();
//
//     PesertaDidik deletePesertaDidik, blankPesertaDidik, tempPesertaDidik;
//
//     size_t size, offset = 0;
//     size = getDataSize(file);
//
//     size_t number;
//     std::cout << "Select (number) to delete: ";
//     std::cin >> number;
//     checkAndCleanCin();
//
//     deletePesertaDidik = readData(file, number - 1);
//
//     std::cout << "Data will be delete: " << std::endl;
//     std::cout << "NPSN    : " << deletePesertaDidik.NPSN << std::endl;
//     std::cout << "Nama    : " << deletePesertaDidik.nama << std::endl;
//     std::cout << "Jurusan : " << deletePesertaDidik.jurusan << std::endl;
//
//     if (!confirmation("Do you want to continue to DELETE this data? (y/n): ")) return;
//
//     writeData(file, number, blankPesertaDidik);
//
//     // Create temp file
//     std::fstream tempFile;
//     tempFile.open("temp.dat", std::ios::out | std::ios::binary | std::ios::trunc);
//
//     for (size_t i = 0; i < size; i++) {
//         tempPesertaDidik = readData(file, i);
//         if (!std::string_view(tempPesertaDidik.nama).empty()) {
//             writeData(tempFile, (i - offset) + 1, tempPesertaDidik);
//         } else {
//             offset++;
//         }
//     }
//
//     size = getDataSize(tempFile);
//
//     file.close();
//
//     file.open(DATABASE_PATH, std::ios::trunc | std::ios::out | std::ios::binary);
//     file.close();
//
//     file.open(DATABASE_PATH, std::ios::out | std::ios::in | std::ios::binary);
//
//     for (size_t i = 1; i <= size; i++) {
//         tempPesertaDidik = readData(tempFile, i - 1);
//         writeData(file, i, tempPesertaDidik);
//     }
// }

// -------------------------------------------------
// LOGIC
///Check database is existed? if not, create once.
void checkDatabaseExist() {
    bool isFileExist = false;

    {
        std::ifstream checkFile(DATABASE_PATH, std::ios::binary);
        if (checkFile.is_open()) {
            isFileExist = true;
        }
    }

    if (isFileExist) {
        std::cout << "Connecting to existed database\n";
    } else {
        std::ofstream createFile(DATABASE_PATH, std::ios::binary | std::ios::app);
        if (createFile.is_open()) {
            std::cout << "Create and connecting to database successfully\n";
            createFile.close();
        }
    }
}

void writeData(std::fstream &file, const size_t &pos, PesertaDidik &newData) {
    file.clear();
    file.seekp((pos - 1) * sizeof(PesertaDidik), std::ios::beg);
    file.write(reinterpret_cast<char *>(&newData), sizeof(PesertaDidik));
}

PesertaDidik readData(std::fstream &file, const size_t &pos) {
    PesertaDidik result;

    std::streampos currentPos = file.tellg();

    file.clear();

    file.seekg(pos * sizeof(PesertaDidik), std::ios::beg);
    file.read(reinterpret_cast<char *>(&result), sizeof(PesertaDidik));

    file.seekg(currentPos, std::ios::beg);

    return result;
}

size_t getDataSize(std::fstream &file) {
    std::streampos currentPos = file.tellg();

    file.clear();

    file.seekg(0, std::ios::beg);
    size_t start = file.tellg();

    file.seekg(0, std::ios::end);
    size_t end = file.tellg();

    file.seekg(currentPos);

    return (end - start) / sizeof(PesertaDidik);
}

// -------------------------------------------------
// Utils
void printAllData(const std::vector<PesertaDidik> &dataRef) {
    std::cout << "No.\tPrimary Key\tNPSN\t\tNama\t\tJurusan" << std::endl;
    for (size_t i = 0; i < dataRef.size(); i++) {
        PesertaDidik data_i = dataRef.at(i);
        std::cout << (i + 1) << "\t" << data_i.pk << "\t\t" << data_i.NPSN << "\t" << data_i.nama << "\t" << data_i.
                jurusan << std::endl;
    }
}

void printMenu() {
    std::cout << "Database Peserta Didik\n";
    std::cout << "======================\n";
    std::cout << "1. Show data\n";
    std::cout << "2. Insert data\n";
    std::cout << "3. Update data\n";
    std::cout << "4. Delete data\n";
    std::cout << "5. Exit\n";
    std::cout << "=====================" << std::endl;
    std::cout << "Select (1-5): ";
}

int getOption() {
    printMenu();

    int userInput;
    std::cin >> userInput;

    if (std::cin.fail()) {
        checkAndCleanCin();

        std::cout << "Input is invalid, please insert the correct option" << std::endl;
        return -1;
    }

    checkAndCleanCin();
    return userInput;
}

bool confirmation(const std::string &text) {
    char input = 0;

    while (tolower(input) != 'n') {
        std::cout << text;
        std::cin >> input;
        if (tolower(input) == 'y') {
            cleanCin();
            return true;
        }
    }

    return false;
}

void cleanCin() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void checkAndCleanCin() {
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}
