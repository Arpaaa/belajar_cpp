#include <iostream>
#include <string>

// NSDMI (Non-Static Data Member Initialization)
struct Mahasiswa {
    std::string name = "Anonymous";
    int age;
};

// Dengan Constructor
struct Book {
    std::string title;
    int year;

    Book(): title("Unknown") {}
};

// Gunakan constructor jika nilai default membutuhkan logic lain terlebih dahulu.

int main() {
    Mahasiswa mahasiswa;
    std::cout << mahasiswa.name << std::endl;
    // std::cout << mahasiswa.age << std::endl; akan menghasilkan Garbage Value

    Book buku1;
    std::cout << buku1.title << std::endl;


    return 0;
}