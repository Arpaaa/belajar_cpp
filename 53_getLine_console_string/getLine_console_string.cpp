#include <iostream>
#include <string>

int main() {
    std::string kalimat_input;

    // getLine(cin, variabel)
    std::cout << "Masukan teks: ";
    std::getline(std::cin, kalimat_input);

    std::cout << kalimat_input << std::endl;


    return 0;
}