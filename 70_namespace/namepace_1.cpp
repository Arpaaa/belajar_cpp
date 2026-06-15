#include <iostream>

namespace otong {
    int b = 10;

    void fungsi() {
        std::cout << "Ini adalah fungsi biasa" << std::endl;
    }

    void cout() {
        std::cout << b << std::endl;
    }
}

int main() {
    std::cout << otong::b << std::endl;
    otong::fungsi();

    otong::cout();

    return 0;
}
