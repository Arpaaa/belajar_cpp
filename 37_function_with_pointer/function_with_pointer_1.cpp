#include <iostream>

using namespace std;

// Tidak butuh return karena hanya mengubah nilai dari address yang dimasukan.
void fungsi(int *);
void kuadrat(int *);

int main() {
    int a = 5;
    cout << "Address a " << &a << endl;
    cout << "Nilai a " << a << endl;

    fungsi(&a);       // fungsi dengan argument pointer

    kuadrat(&a);
    cout << "Nilai a " << a << endl;


    return 0;
}

void fungsi(int *b) {
    cout << "Address b " << b << endl;
    cout << "Nilai b " << *b << endl;
}

void kuadrat(int *valPtr) {
    *valPtr = (*valPtr) * (*valPtr);
}