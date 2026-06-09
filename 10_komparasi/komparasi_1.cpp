#include <iostream>

using namespace std;

int main() {
    int a = 2;
    int b = 2;
    int c = 3;

    // Sebanding (==)
    cout << "Sebanding (==): " << endl;
    cout << (a == b) << endl;
    cout << (a == c) << endl;

    // Tidak Sebanding (!=)
    cout << "Tidak Sebanding (!=): " << endl;
    cout << (a != b) << endl;
    cout << (a != c) << endl;

    // Kurang dari (<) atau Kurang dari atau Sama dengan (<=)
    cout << "Kurang Dari (<) ata Kurang dari atau Sama dengan (<=): " << endl;
    cout << (a < b) << endl;
    cout << (a < c) << endl;
    cout << (a <= b) << endl;

    // Lebih dari (>)
    cout << "Lebih dari (>) ata Lebih dari atau Sama dengan (>=): " << endl;
    cout << (a > b) << endl;
    cout << (a > c) << endl;
    cout << (c > a) << endl;
    cout << (a >= b) << endl;
    return 0;
}