#include <iostream>
#include <algorithm>
#include <array>

const size_t ARRAY_SIZE = 10;

void printArray(const std::array<int, ARRAY_SIZE> &arrayRef);

int main() {
    std::array<int, ARRAY_SIZE> angka = {9, 4, 3, 1, 6, 7, 5, 8, 0, 2};
    printArray(angka);

    int search_value;
    bool isFound;

    std::cout << "Cari angka (1-9): ";
    std::cin >> search_value;

    // find - linear search

    isFound = std::find(angka.begin(), angka.end(), search_value);
    std::cout << isFound << std::endl;

    // Sort -> binary_search
    std::sort(angka.begin(), angka.end());
    isFound = std::binary_search(angka.begin(), angka.end(), search_value);

    std::cout << isFound << std::endl;

    return 0;
}

void printArray(const std::array<int, ARRAY_SIZE> &arrayRef) {
    std::cout << "Array: ";
    for (const int &a: arrayRef) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

void printArray(const std::array<char, ARRAY_SIZE> &arrayRef) {
    std::cout << "Array: ";
    for (const char &a: arrayRef) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}
