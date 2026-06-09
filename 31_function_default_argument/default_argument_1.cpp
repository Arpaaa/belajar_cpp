#include <iostream>

using namespace std;

// Default argument
double volume_kubus(double panjang, double lebar, double tinggi = 1);

double volume_tabung(double r, double tinggi = 1) {
    double PI = 3.14;
    return (PI * (r * r) * tinggi);
}

int main() {
    cout << "Volume kubus: " << volume_kubus(3, 4, 5) << endl;
    cout << "Volume kubus: " << volume_kubus(3, 4) << endl;
    cout << "Volume tabung: " << volume_tabung(5, 3) << endl;
    cout << "Volume tabung: " << volume_tabung(5) << endl;

    return 0;
}

double volume_kubus(double panjang, double lebar, double tinggi) {
    return (panjang * lebar * tinggi);
}
