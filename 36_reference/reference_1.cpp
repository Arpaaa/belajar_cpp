#include <iostream>

using namespace std;

int main() {
    int a = 5;

    cout << "address dari a " << &a << endl;
    cout << "Nilai dar a " << a << endl;

    // Reference
    int &b = a;
    cout << "Nilai dari b "  << b << endl;
    cout << "address dari b " << &b << endl;

    b = 10;
    cout << "Nilai dar a " << a << endl;
    cout << "Nilai dari b "  << b << endl;

    a = 20;
    cout << "Nilai dar a " << a << endl;
    cout << "Nilai dari b "  << b << endl;
    return 0;
}