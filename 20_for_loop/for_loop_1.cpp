#include <iostream>

using namespace std;

int main() {
    // FOR LOOP
    // for (inisialisasi; kondisi; increment/decrement)
    for (int i = 1; i < 10; i++) {
        cout << "Hello " << i << endl;
    }

    for (int i = 1; i < 10; i += 2) {
        cout << "Hi " << i << endl;
    }

    for (int i = 1; i >= -10; i--) {
        cout << "Hallo " << i << endl;
    }

    int total = 0;
    for (int i = 1; i <= 10; total += i, i++) {
        cout << total << endl;
    }


    return 0;
}
