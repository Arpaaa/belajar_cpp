#include <iostream>

using namespace std;

int main() {
    int a = 0;

    // Aksi dulu baru syarat
    // Aksi miniimal dijalankan 1 kali.
    do {
        cout << "Hore! " << a << endl;      // Aksi (start)
        a++;                                // Aksi (end)
    } while (a < 10);                       // Syarat

    do {
        cout << "Ini akan dijalankan walau syarat salah" << endl;
    } while (false);

    return 0;
}