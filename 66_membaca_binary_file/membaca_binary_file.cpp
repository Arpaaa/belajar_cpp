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

    int hasil;
    int level;
    file.open("data.bin", ios::in | ios::binary);
    if (!is_file_open(file)) return -1;

    file.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    file.read(reinterpret_cast<char*>(&level), sizeof(level));

    cout << hasil << endl;
    cout << level << endl;

    return 0;
}