#include <iostream>

using namespace std;

int main() {
    int a = 5;
    // int a mempunya nilai dan address

    // Pointer akan selalu bertipe data pointer.
    int *aPtr = &a;

    // Null ponter
    int *aDuaPtr = nullptr;
    aDuaPtr = &a; // Memasukan atau mengubah alamat tidak perlu * di awal

    cout << "Nilai dari a: " << a << endl;
    cout << "Alamat dari a: " << &a << endl;
    cout << "Alamat dari aPtr: " << aPtr << endl;

    // Dereferencing, mengambil data dari sebuah pointer
    cout << "Alamat dari aPtr: " << *aPtr << endl;

    // Mengubah nilai pointer
    int b = 10;
    int *bPtr = &b;

    cout << "Nilai dari b: " << b << endl;
    cout << "Nilai dari bPtr: " << *bPtr << endl;
    cout << "Alamat dari b dan bPtr" << bPtr << endl;
    cout << "Alamat dari bPtr " << &bPtr << endl;

    cout << "Ubah nilai b " << endl;
    *bPtr = 5; // ini akan mengubah data dari variabel b
    cout << "Nilai dari b " << b << endl;
    cout << "Alamat dari b " << &b << endl;
    cout << "Nilai dari bPtr " << *bPtr << endl;
    cout << "Alamat dari bPtr " << bPtr << endl;
    cout << "Ukuran dari pointer " << sizeof(bPtr) << " bytes" << endl; // 8 bytes


    return 0;
}
