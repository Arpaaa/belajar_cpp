#include <iostream>

using namespace std;

void print_array(int *ptrArray, int baris, int kolom) {
    int index = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << endl;
    }
}

// void print_array_2(int *ptrArray) {
//     for (int baris : *(ptrArray))
// }

int main() {
    // Array Multidimensi
    // tipe_data nama_array[baris][kolom]

    // [ 1 2 ]
    // [ 3 4 ]
    int arrayMd[2][2] = {1, 2, 3, 4};
    int arrayMd2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    print_array(*arrayMd, 2, 2);
    print_array(*arrayMd2, 2, 3);

    // Rumus Aritmatika Pointer
    // Mendapatkan matriks[i][j]

    // Perhitungan Komputer
    // Alamat = Alamat Awal + (((i * jumlah_kolom) + j) * sizeof(tipe_data) )

    // Mendapatkan arrayMd2[1][1]

    // Tahapnya: - Mengambil baris ke 2 tapi masih berupa alamat baris ke 2 kolom 1,
    //           - Menambahkan 2*4 byte alamat dan melakukan dereferencing
    int element = *(*(arrayMd2 + 1) + 1);

    cout << element << endl;
    cout << arrayMd2[0][3] << endl; // illegal tapi gk error

    return 0;
}