#include <iostream>
#include <fstream>

using namespace std;

bool is_file_open(fstream &inputFileRef) {
    if (!inputFileRef.is_open()) {
        std::cerr << "Error: tidak dapat membuka file" << std::endl;
        return false;
    }

    return true;
}

int main() {
    fstream file;

    file.open("data.bin", ios::out | ios::binary);
    if (!is_file_open(file)) return -1;

    int number = 125;
    int level = 10;

    file.write(reinterpret_cast<char*>( &number), sizeof(number));
    file.write(reinterpret_cast<char*>( &level), sizeof(level));

    file.close();


    return 0;
}