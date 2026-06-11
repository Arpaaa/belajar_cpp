#include <iostream>

using namespace std;

int main() {
    int a = 5;
    float b = 6.67f;
    char c = 'd';

    cout << a + b << endl;  // Implicit Casting, compiler mengubah a menjadi float

    int hasil = a + b;
    cout << hasil << endl;

    float hasilFloat = a + b;
    cout << hasilFloat << endl;

    // Casing Explicit (C-Style)
    hasil = a + (int)b;
    cout << hasil << endl;

    return 0;
}