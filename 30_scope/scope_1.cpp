#include <iostream>

using namespace std;

// Global Scope
int x = 10; // Variabel Global

int ambil_global() {
    return x;
}

int x_local() {
    int x = 5;
    return x;
}

int main() {
    cout << "1. Variabel global: " << x << endl; // Mengambil variabel global

    int x = 8; // Membuat variabel lokal
    cout << "2. Variabel lokal main: " << x << endl; // Mengambil variabel lokal

    cout << "3. Variabel ambil_global: " << ambil_global() << endl;
    cout << "4. Variabel local main: " << x << endl; // Mengambil variabel lokal
    cout << "5. Variabel x_local " << x_local() << endl; // Mengambil variabel x_local
    cout << "6. Variabel local main: " << x << endl; // Mengambil variabel lokal

    {
        cout << "7. Variabel local main: " << x << endl; // Mengambil variabel lokal

        int x = 11;
        cout << "8. Variabel local block: " << x << endl; // Mengambil variabel lokal block scope
        cout << "8. Variabel local global: " << ::x << endl; // Mengambil variabel global
    }
        cout << "9. Variabel local main: " << x << endl; // Mengambil variabel lokal block scope

    // Output:
    /*
    * Variabel lokal tidak menimpa variabel global, dengan dibuktikan bahwa ambil_global tetap bisa
    * mengambil variabel global walau dipanggil di scope main yang mana terdapat variabel lokal yang
    * memliki nama variabel yang sama dengan global.
    */

    return 0;
}
