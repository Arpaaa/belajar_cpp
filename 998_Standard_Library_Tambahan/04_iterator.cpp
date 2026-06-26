#include <iostream>
#include <vector>
#include <string>

int main() {
    // std::vector<int> angka = {1, 3, 5, 7, 9, 11, 13, 15};
    int numbers[5] = {1, 2, 3, 4, 5};

    std::cout << numbers << std::endl;
    std::cout << &numbers[0] << std::endl;
    std::cout << &numbers[1] << std::endl;
    std::cout << &numbers[2] << std::endl;
    std::cout << &numbers[3] << std::endl;
    std::cout << &numbers[4] << std::endl;

    std::cout << std::endl;

    char chars[5] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << &chars << std::endl;
    std::cout << reinterpret_cast<void *>(&chars[0]) << std::endl;
    std::cout << reinterpret_cast<void *>(&chars[1]) << std::endl;
    std::cout << reinterpret_cast<void *>(&chars[2]) << std::endl;
    std::cout << reinterpret_cast<void *>(&chars[3]) << std::endl;
    std::cout << reinterpret_cast<void *>(&chars[4]) << std::endl;

    std::cout << std::endl;

    std::cout << *numbers << std::endl;
    std::cout << *(numbers + 3) << std::endl;
    std::cout << *(&numbers[0]) << std::endl;

    std::cout << std::endl;

    auto numbers_end = &numbers[4];

    for (auto i = numbers; i <= numbers_end; i++) {
        std::cout << *i << std::endl;
    }

    return 0;
}
