#include <iostream>

using namespace std;

int main() {
    int nilai_siswa_1 = 50;
    int nilai_siswa_2 = 30;

    bool kondisi = true;

    /// Jika kondisi true maka akan mengambil variabel nilai_siswa_1 jika false
    /// akan mengambil variabel nilai_siswa_2 dan memasukan value 60
    (kondisi ? nilai_siswa_1 : nilai_siswa_2) = 60;

    cout << "variabel nilai_siswa_1: " << nilai_siswa_1 << endl;
    cout << "variabel nilai_siswa_2: " << nilai_siswa_2 << endl;

    return 0;
}