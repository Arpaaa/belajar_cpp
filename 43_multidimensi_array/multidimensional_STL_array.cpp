#include <iostream>
#include <array>

using namespace std;

const int baris = 2;
const int kolom = 3;

void print_aray(const array<array<int, kolom>, baris> &arrayMD) {
    for (array<int, kolom> vektorBaris : arrayMD) {
        for (int nilaiKolom : vektorBaris) {
            cout << nilaiKolom << ' ';
        }
        cout << endl;
    }
}

int main() {
    array<array<int, kolom>, baris> nilaiMD = {1, 2, 3, 4, 5, 6};
    array<array<int, kolom>, baris> nilaiMD2 = {
        {
            {1, 2, 3},
            {4, 5, 6}
        }
    };

    cout << "Nilai MD 1" << endl;
    cout << nilaiMD[0][0] << " ";
    cout << nilaiMD[0][1] << " ";
    cout << nilaiMD[0][2] << endl;
    cout << nilaiMD[1][0] << " ";
    cout << nilaiMD[1][1] << " ";
    cout << nilaiMD[1][2] << endl;

    cout << endl;
    print_aray(nilaiMD);

    cout << endl;
    print_aray(nilaiMD2);

    return 0;
}
