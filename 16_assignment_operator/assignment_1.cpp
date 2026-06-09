#include <iostream>

using namespace std;

int main() {

    // Assignment
    int a = 10;

    // Assignment Operator
    // RUMUS:   nama_variabel operator= ekspresi
    //                a             += 3            sama aja kaya a = a + 3

    a += 3;
    cout << "variabel a ditambah  3 = " << a << endl;

    a -= 3;
    cout << "variabel a dikurang  3 = " << a << endl;

    a /= 3;
    cout << "variabel a dibagi    3 = " << a << endl;

    a *= 3;
    cout << "variabel a dikali    3 = " << a << endl;

    a %= 3;
    cout << "variabel a dimodulus 3 = " << a << endl;


    cout << a << endl;

    return 0;
}