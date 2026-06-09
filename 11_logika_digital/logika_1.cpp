#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 2;

    // not menggunakan !
    cout << "NOT: " << endl;
    bool hasil1 = !(a == b);
    cout << hasil1 << endl;

    // and menggunakan keyword and atau &&
    // Semua nilai harus benar untuk mengahsilkan true
    cout << "AND: " << endl;
    cout << ((a == 5) && (b == 2)) << endl; // true  and true  = true
    cout << ((a == 5) and (b < 2)) << endl;  // true  and false = false
    cout << ((a == 3) && (b == 2)) << endl; // false and true  = false
    cout << ((a == 3) and (b == 5)) << endl; // false and false = false

    // or menggunakan keyword or atau ||
    // salah satu nilai harus benar untuk menghasilkan true
    cout << "OR: " << endl;
    cout << ((a == 5) || (b == 2)) << endl;  // true  or true  = true
    cout << ((a == 5) || (b == 3)) << endl;  // true  or false = true
    cout << ((a == 3) or (b == 2)) << endl;  // false or true  = true
    cout << ((a == 3) or (b == 3)) << endl;  // false or false = false

    return 0;
}
