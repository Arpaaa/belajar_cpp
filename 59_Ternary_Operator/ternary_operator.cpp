#include <iostream>
#include <string>

using namespace std;

// Ternary Operator = ?
// kondisi ? hasil1 : hasil2

int main() {
    int input;
    cout << "Masukan angka 1-9: ";
    cin >> input;

    string result = (input < 5) ? "Nilaimu lebih kecil dari 5" : "Nilaimu lebih besar atau sama dengan 5";

    cout << result;

    return 0;
}