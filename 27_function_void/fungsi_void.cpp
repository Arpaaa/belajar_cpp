#include <iostream>

using namespace std;

// Reporter
int areaof(int a, int b) {
    return a*b;
}

// Worker
void tampilkan(int input) {
    cout << input << endl;
}

int main() {
    double input1, input2;
    cout << "Masukan nilai panjang: ";
    cin >> input1;

    cout << "Masukan nilai lebar: ";
    cin >> input2;

    int hasil = areaof(input1, input2);
    tampilkan(hasil);

    return 0;
}