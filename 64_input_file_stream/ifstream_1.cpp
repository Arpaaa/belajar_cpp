#include <iostream>
#include <fstream>

bool is_file_open(std::ifstream &inputFileRef) {
    if (!inputFileRef.is_open()) {
        std::cerr << "Error: tidak dapat membuka file" << std::endl;
        return false;
    }

    return true;
}

int main() {
    std::ifstream inputFile;

    std::string data;

    inputFile.open("data.txt");

    if (!is_file_open(inputFile)) return -1;


    // inputFile >> data; /// memasukan "ini" ke data
    // inputFile >> data; /// Memasukan "adalah ke data

    std::getline(inputFile, data); /// mengambil baris pertama dari file
    std::getline(inputFile, data); /// mengambil baris kedua dari file

    std::cout << data << std::endl;

    /// baris atau kata pertama ke timpa oleh baris kedua
    inputFile.close();

    /// Oleh karena itu, kita buat variabel buffer untuk menampung data baru dan akan diappend ke data lama
    std::string buffer;

    inputFile.open("data.txt");
    if (!is_file_open(inputFile)) return -1;

    std::getline(inputFile, buffer);
    data.append(buffer);

    std::getline(inputFile, buffer);
    data.append(buffer);

    std::cout <<  data << std::endl;

    inputFile.close();

    return 0;
}
