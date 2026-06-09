#include <string>
#include <iostream>

using namespace std;

struct Actor {
    string nama;
    int tahun_lahir;
};

struct Film {
    string judul;
    string genre;
    int tahun;
    Actor pemeran_1;
    Actor pemeran_2;

    // Method di Struct
    void cetakInfo() const {
        cout << "- Judul       : " << judul << endl;
        cout << "- Genre       : " << genre << endl;
        cout << "- Tahun Rilis : " << tahun << endl;
        cout << "- Pemeran     : " << pemeran_1.nama << "(" << pemeran_1.tahun_lahir << ")";
        cout << ", " << pemeran_2.nama <<  "(" << pemeran_2.tahun_lahir << ")" << endl;
    }
};

int main() {
    Actor aktor1 = {"Jelita", 2007};
    Actor aktor2 = {"Arfa", 2008};
    Actor aktor3 = {"Prabowo", 100};

    Film film1 = {"Ada apa dengan dia", "Romance", 2030, aktor1, aktor2};
    Film film2 = {"Pesta Kekuasaan", "Action", 2035, aktor3, aktor1};

    cout << "Film 1" << endl;
    cout << "- Judul       : " << film1.judul << endl;
    cout << "- Genre       : " << film1.genre << endl;
    cout << "- Tahun Rilis : " << film1.tahun << endl;
    cout << "- Pemeran     : " << film1.pemeran_1.nama << "(" << film1.pemeran_1.tahun_lahir << ")";
    cout << ", " << film1.pemeran_2.nama <<  "(" << film1.pemeran_2.tahun_lahir << ")" << endl;
    cout << endl;

    cout << "Film 2" << endl;
    film2.cetakInfo();
    cout << endl;

    return 0;
}
