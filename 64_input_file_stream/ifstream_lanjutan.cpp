#include <iostream>
#include <string>
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

    inputFile.open("data.txt");
    if (!is_file_open(inputFile)) return -1;

    std::string data, stringBuffer;

    while (std::getline(inputFile, stringBuffer)) {
        data.append(stringBuffer + "\n");
    }

    std::cout << data << std::endl;

    return 0;
}
