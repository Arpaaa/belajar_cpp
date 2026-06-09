#include <iostream>

using namespace std;

int main() {
    int a = 0;

    // Syarat baru aksi
    // Aksi bisa saja tidak dijalankan sama sekali.
    while (a < 10) {                    // Syarat
        cout << "Hello " << a << endl;  // Aksi  (Start)
        a++;                            // Aksis (End)
    }

    return 0;
}