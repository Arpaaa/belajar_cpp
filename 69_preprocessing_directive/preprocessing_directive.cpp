/*
 * Tanda # adalah preprocessing directive
 * artinya akan diproses oleh preprocessing, bukan compiler. sehingga
 * tidak juga berhubungan dengan memori
 */

#include <iostream>

using namespace std;


/// Contoh:
/// Macro
#define PI 3.14159265359
// berbeda dengan
double pi = 3.14159265359;

int main() {
    cout << "Nilai pi double = " << pi << endl; // akan disimpan di memori
    cout << "Nilai PI = " << PI << endl;        // Ini akan diganti oleh nilai PI saat preprocessing
    /// Sehingga PI tidak memiliki address (error jika coba mengambil address dengan &)
    return 0;
}