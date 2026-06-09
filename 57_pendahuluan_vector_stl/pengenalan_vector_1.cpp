#include <iostream>
#include <string>
#include <vector>

struct PesertaDidik {
    std::string name;
    int age;
    char grade;

    PesertaDidik() : name("Anonymous"), age(0), grade('1') {
    }

    PesertaDidik(const std::string &name, const int &age, const char &grade)
        : name(name), age(age), grade(grade) {
        std::cout << "Selamat datang " << name << "!" << std::endl;
    }
};

void printArray(std::vector<std::string> &arrayRef);

void printMemberKelas(const std::vector<PesertaDidik> &kelasRef);

int main() {
    // Deklarasi Vektor
    // std::vector<TipeData> namaVarriabel
    std::vector<std::string> members;
    std::cout << "Kapasitas Vektor (1): " << members.capacity() << std::endl;

    // push_back - menambah data dari paling belakang
    members.push_back("Arfa");
    std::cout << "Kapasitas Vektor (2): " << members.capacity() << std::endl;

    members.push_back("Jelita");
    std::cout << "Kapasitas Vektor (3) : " << members.capacity() << std::endl;

    members.push_back("Intan");
    std::cout << "Kapasitas Vektor (4): " << members.capacity() << std::endl;


    // size - mengembalikan jumlah data yang ada di dalam vektor saat ini
    std::cout << "Jumlah Member: " << members.size() << std::endl;

    // capacity - berapa banyak kapasitas memori yang sudah direserve oleh vektor
    std::cout << "Kapasitas Vektor (5): " << members.capacity() << std::endl;

    // pop_back - menghapus data paling belakang
    members.pop_back();

    std::cout << "Jumlah Member: " << members.size() << std::endl;
    std::cout << "Kapasitas Vektor (6): " << members.capacity() << std::endl;

    members.pop_back();

    std::cout << "Jumlah Member: " << members.size() << std::endl;
    std::cout << "Kapasitas Vektor (6): " << members.capacity() << std::endl;

    std::cout << std::endl;

    members.push_back("Jelita");
    members.push_back("Intan");

    // Mengakses Vektor
    /// vector[index] - sangat cepat, namun
    ///                 jika tidak ada element pada index yang diminta maka akan
    ///                 memicu Undefined Behavior, atau malah membaca Garbage Value
    std::cout << "Member ke-1: " << members[0] << std::endl;
    std::cout << "Member ke-2: " << members[1] << std::endl;
    std::cout << "Member ke-3: " << members[2] << std::endl;

    std::cout << std::endl;
    /// at(index) - lebih aman dari out-of-bounds dan melemparkan
    ///             Error Exception sehingga program bisa dihentukan dengan aman
    std::cout << "Member ke-1: " << members.at(0) << std::endl;
    std::cout << "Member ke-2: " << members.at(1) << std::endl;
    std::cout << "Member ke-3: " << members.at(2) << std::endl;

    std::cout << std::endl;

    std::vector<std::string> my_circle = {"Irsya", "Iman", "Intan", "Salsa", "Felisa", "Arum", "Arfa"};
    std::cout << "Jumlah anggota my_circle: " << my_circle.size() << std::endl;

    std::cout << std::endl;

    // Index Based
    for (int i = 0; i < my_circle.size(); i++) {
        std::cout << "Anggota ke-" << (i + 1) << ": " << my_circle[i] << std::endl;
    }

    std::cout << std::endl;

    // Ranged-Based
    std::cout << "Anggota my_circle: ";
    for (std::string anggota: my_circle) {
        std::cout << anggota << ", ";
    }
    std::cout << std::endl;

    std::vector<PesertaDidik> kelasA;

    // push_back
    kelasA.push_back(PesertaDidik{"Arfa", 17, '2'});
    kelasA.push_back({"Jelita", 18, '2'});

    std::cout << "Jumlah siswa kelas A: " << kelasA.size() << std::endl;

    // emplace_back - sama seperti pop_back namun lebih efisien (Harus ada constructor)
    std::vector<PesertaDidik> kelasB;
    kelasB.emplace_back("Fazel", 17, '1');

    // reserve - reserve memori langsung
    std::cout << std::endl;
    std::cout << "Kapasitas Kelas B awal : " << kelasB.capacity() << std::endl;
    kelasB.reserve(1000);
    std::cout << "Kapasitas Kelas B akhir: " << kelasB.capacity() << std::endl;

    kelasB.emplace_back("Rendy", 17, '1');
    kelasB.reserve(500);

    std::cout << "Kapasitas Kelas B akhir (2): " << kelasB.capacity() << std::endl;

    /// shrink_to_fit - mengecilkan kapasitas heap yang sudah di reserve sehingga tidak
    ///                 ada space kosong.
    kelasB.shrink_to_fit();
    std::cout << "Kapasitas Kelas B akhir (3): " << kelasB.capacity() << std::endl;

    std::cout << std::endl;
    /// resize - mirip dengan reserve tapi menginisialisasi data nyata (Size) dengan
    ///          nilai default (misal 0 atau string kosong "")
    ///          jika vektor berupa vector of struct, maka struct harus ada nilai default
    ///          atau constructor default.
    kelasB.resize(3);

    std::cout << "Nama siswa kelas B index ke-2 " << kelasB.at(2).name << std::endl;

    kelasB.resize(2);
    /// Jika nilai resize lebih kecil dari pada size saat ini, maka element terakhir
    /// akan dihapus (dibuang)
    std::cout << "Jumlah anggota kelas B (1): " << kelasB.size() << std::endl;

    /// pop_back - menghapus satu data terakhir
    kelasB.pop_back();
    std::cout << "Jumlah Kelas B akhir (2): " << kelasB.size() << std::endl;

    std::cout << kelasB.size() << std::endl;

    std::cout << std::endl;
    kelasB.resize(5);
    std::cout << "Jumlah Kelas B akhir (3): " << kelasB.size() << std::endl;

    /// clear - menghapus seluruh isi vektor
    kelasB.clear();
    std::cout << "Jumlah Kelas B akhir (4): " << kelasB.size() << std::endl;
    std::cout << std::endl;

    std::cout << "Siswa kelas A: ";
    printMemberKelas(kelasA);
    std::cout << std::endl;

    /// insert - memasukan data di tengah-tengah vektor (sifatnya seperti push_back)
    /// memasukan data di index 1
    kelasA.insert(kelasA.begin() + 1, PesertaDidik("Rifki", 17, '2'));

    std::cout << "Siswa kelas A: ";
    printMemberKelas(kelasA);
    std::cout << std::endl;

    /// emplace - sama seperti insert tapi sifatnya seperti emplace_back
    /// memasukan data di index 2
    kelasA.emplace(kelasA.begin() + 2, "Alya", 17, '2');

    std::cout << "Siswa kelas A: ";
    printMemberKelas(kelasA);
    std::cout << std::endl;

    /// erase - menghapus data di tengah lalu menarik seluruh element dibelakang maju
    ///         mengisi tempat yang kosong.
    kelasA.erase(kelasA.begin() + 2);

    std::cout << "Siswa kelas A: ";
    printMemberKelas(kelasA);
    std::cout << std::endl;

    /// assign - reset dan isi ulang data dengan data yang sama tidak bisa constructor on place
    kelasA.assign(5, PesertaDidik("Arfa", 17, '2'));

    std::cout << "Siswa kelas A: ";
    printMemberKelas(kelasA);
    std::cout << std::endl;

    /// swap - menukar isi dan memori antara 2 vektor sejenis
    kelasA.swap(kelasB);

    std::cout << "Siswa kelas A: ";
    printMemberKelas(kelasA);
    std::cout << std::endl;

    std::cout << "Siswa kelas B: ";
    printMemberKelas(kelasB);
    std::cout << std::endl;
}

void printMemberKelas(const std::vector<PesertaDidik> &kelasRef) {
    for (const PesertaDidik &siswa: kelasRef) {
        std::cout << siswa.name << ", ";
    }
}

void printArray(std::vector<std::string> &arrayRef) {
    for (int i = 0; i < arrayRef.size(); i++) {
        std::cout << "Anggota ke-" << (i + 1) << ": " << arrayRef[i] << std::endl;
    }
}
