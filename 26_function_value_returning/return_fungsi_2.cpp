#include <iostream>

using namespace std;

int areaof(int a, int b) {
    return a*b;
}

int main() {
    int input1, input2;
    cout << "Masukan nilai panjang: ";
    cin >> input1;

    cout << "Masukan nilai lebar: ";
    cin >> input2;

    int hasil = areaof(input1, input2);
    cout << hasil << endl;

    return 0;
}