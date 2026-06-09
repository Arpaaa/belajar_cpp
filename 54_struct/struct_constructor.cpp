#include <iostream>
#include <string>

// Constructor Dasar
struct Student {
    std::string name;
    int age;
    char grade;

    /// Contructor - member function khusus yang dieksekusi secara otomatis saat objek baru dari kelas tersebut
    ///              dibuat
    ///            - Nama fungsi constructor harus SAMA PERSIS dengan nama structnya.
    ///            - Tidak boleh memiliki tipe data kembalian (return type) bahkan void pun tidak boleh.

    Student(const std::string &pName, const int &age, const char &pGrade) {
        name = pName;
        this->age = age; // gunakan this-> jika ingin param contructor sama dengan nama member variabels
        grade = pGrade;

        // Logika lain juga bisa dijalankan langsung ketika object dibuat
        std::cout << "Hallo! Selamat datang " << pName << "!" << std::endl;
    }
};

// Initializer List (cara modern)
struct Teacher {
    std::string name;
    std::string subject_taught;
    int age;

    Teacher(const std::string &name, const std::string &subjectTaught, const int &age)
    // tidak perlu this karena compiler sudah bisa membedakan.
        : name(name), subject_taught(subjectTaught), age(age) {
        /// Bisa dikosongkan karena tugas inisialisasi sudah selesai atau jika ada logic lain bisa ditambahkan
        /// agar dijalankan ketika object dibuat.
        std::cout << "Hallo! Selamat datang " << name << "!" << std::endl;

    }
};

int main() {
    Student siswa1("Arfa", 17, '2');

    Teacher guru1("Leo", "Kimia", 100);

    std::cout << guru1.name << std::endl;

    return 0;
}
