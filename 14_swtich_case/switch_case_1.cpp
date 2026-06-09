#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "Masukan nilai (1-5): " << endl;

    cin >> a;

    switch (a) {
        case 1:
            cout << "Sangat Buruk" << endl;
            break;
        case 2:
            cout << "Buruk" << endl;
            break;
        case 3:
            cout << "Netral" << endl;
            break;
        case 4:
            cout << "Baik" << endl;
            break;
        case 5:
            cout << "Sangat Baik" << endl;
            break;
        default:
            cout << "Tidak Ada" << endl;
            break;
    }

    return 0;
}