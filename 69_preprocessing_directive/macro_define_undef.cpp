// Preprocessing directive
#include <iostream>

/// Macro
/// Jika ingin membuat alias, konstanta, atau fungsi singkat yang akan diganti secara otomatis di seluruh kode
/// sebelum kompilasi.
#define PI 3.14159265359
/// Sebelum kode dicompile, preprocessor akan mencari kata PI dan mengganti menjadi value tersebut.

#define BAHASA "indonesia"

/// macro untuk fungsi
#define KUADRAT(X) ( (X)*(X) )
#define MAX(A, B) ( A > B ? A : B)
#define KALI(A, B) (A * B)

using namespace std;

int kali(int a, int b) {
    return a * b;
}

int main() {
    cout << "nilai PI: " << PI << endl;
    cout << "bahasa: " << BAHASA << endl;

    cout << "Kuadrat: " << KUADRAT(5) << endl;
    cout << "max: " << MAX(5, 10) << endl;

#undef BAHASA

    // Gk akan diubah lagi di preprocessor
    // cout << BAHASA << endl;

    cout << KALI(5 + 3, 2) << endl;
    cout << kali(5 + 3, 2)  << endl;
    return 0;
}
