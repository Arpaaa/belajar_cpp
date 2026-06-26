#include <iostream>
#include <string>

int main() {
    auto sayHello = []() {
        std::cout << "Hello dunia C++!" << std::endl;
    };

    sayHello();

    auto sayHelloTo = [](std::string name) -> void {
      std::cout << "Hello " << name << ", selamat datang di dunia C++" << std::endl;
    };

    sayHelloTo("Arfa");

    int count = 0;
    auto printCount = [count]() {
        std::cout << "Nilai counter: " << count << std::endl;
    };

    printCount();

    auto addCounter = [&count]() {
        count++;
    };

    addCounter();
    std::cout << count << std::endl;
    printCount();

    std::string nama = "Arfa Luthfi";
    int umur = 17;

    auto getProfile = [=]() {
      std::cout << nama << ". Umur: " << umur << std::endl;
    };
    getProfile();

    auto getAgeNextYear = [&, umur]() mutable {
        std::cout << nama << " akan berumur " << ++umur << " di tahun besok." << std::endl;
    };

    getAgeNextYear();

    return 0;
}