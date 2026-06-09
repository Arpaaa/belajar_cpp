#include <iostream>

using namespace std;

void cetak1() { cout << "Cetak 1" << endl; }
void cetak2() { cout << "Cetak 2" << endl; }

int main() {
    bool kondisi = false;

    (kondisi ? cetak1() : cetak2());

    return 0;
}