#include <iostream>

using namespace std;

int main() {
    // Increment dan Decrement

    // Pre-incremenet dan Post-increment

    int a = 5;
    int b = 5;

    // Post Increment
    cout << "Post-increment" << endl;
    cout << "Sebelum = " << a << endl;
    cout << "Sesaat  = " << a++ << endl;
    cout << "Setelah = " << a << endl;

    // Pre increment
    cout << "Pre-increment" << endl;
    cout << "Sebelum = " << b << endl;
    cout << "Sesaat  = " << ++b << endl;
    cout << "Setelah = " << b << endl;

    return 0;
}