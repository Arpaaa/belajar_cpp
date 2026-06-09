#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i <= 15; i++) {
        if (i == 9) {
            break;
        }

        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }

    cout << "Program Selesai" << endl;

    return 0;
}
