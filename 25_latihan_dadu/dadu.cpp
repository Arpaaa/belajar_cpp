#include <iostream>
#include <cstdlib> // Memiliki fungsi random

using namespace std;

int main() {
    char user_input;
    while (true) {
        cout << "Lempar dadu? (y/n) ";
        cin >> user_input;

        if (user_input == 'y') {
            cout << "Dadu dilempar dan menghasilkan angka: " << (rand() % 6) + 1 << endl;
        } else if (user_input == 'n') {
            cout << "Lempar dadu selesai" << endl;
            break;
        } else {
            cout << "Hanya menerima input (y/n)" << endl;
        }
    }

    return 0;
}