#include <iostream>
#include <array>

using namespace std;

int main() {
    // Looping untuk array di C++11 ke atas
    // for (deklarasi variabel : array)

    array<int, 10> arrayNilai = {1, 2, 3, 4, 5, 6,7, 8, 9, 10};

    for (int nilai : arrayNilai) { // addressnya sama semua
        cout << "address " << &nilai << " nilainya " << nilai << endl;
        nilai = 1; // Tidak mengubah array
    }
    cout << endl;
    for (int &nilaiRef : arrayNilai) { // Ref mengambil nilai sebenarnya
        nilaiRef *= 2; // Mengubah array
        cout << "address " << &nilaiRef << " nilainya " << nilaiRef << endl;
    }
    cout << endl;
    for (int &nilaiRef : arrayNilai) { // Ref mengambil nilai sebenarnya
        cout << "address " << &nilaiRef << " nilainya " << nilaiRef << endl;
    }

    return 0;
}