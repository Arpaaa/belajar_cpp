#include <iostream>

using namespace std;

int main() {
    // Basic Array.
    // Array adalah kumpulan data.
    // Array indexnya dimulai dari 0.
    // Bisa langsung assign nilai seperti berikut:
    // int nilai[5] = {1, 2, 3, 4, 5};
    int nilai[5];
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;

    cout << "Ambil element gaya biasa " << nilai[0] << endl;
    cout << "Ambil element dengan pointer " << *nilai << endl;
    cout << endl;

    cout << "Alamat dari nilai " << nilai << endl << endl;

    cout << &nilai[0] << " Nilainya adalah " << nilai[0] << endl;
    cout << &nilai[1] << " Nilainya adalah " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainya adalah " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainya adalah " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainya adalah " << nilai[4] << endl;

    // Memanipulasi dengan pointer
    int *ptr = nilai; // nilai sudah berupa address
    *(ptr + 2) = 10;  // tambahkan 2 * (4 bytes) lalu ambil datanya, kemudian masukan
                      // nilai 10 kedalamnya.

    // Mengubah langsung
    nilai[3] = 7;
    cout << endl;
    cout << &nilai[0] << " Nilainya adalah " << nilai[0] << endl;
    cout << &nilai[1] << " Nilainya adalah " << nilai[1] << endl;
    cout << &nilai[2] << " Nilainya adalah " << nilai[2] << endl;
    cout << &nilai[3] << " Nilainya adalah " << nilai[3] << endl;
    cout << &nilai[4] << " Nilainya adalah " << nilai[4] << endl;

    cout << endl;
    cout << "Ukuran array nilai " << sizeof(nilai) << " Bytes" << endl;
    cout << "Jumlah element dari nilai adalah " << sizeof(nilai) / sizeof(int) << endl;

    return 0;
}