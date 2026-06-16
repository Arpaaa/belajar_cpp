#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    vector<int> angka;
    long long result = 0;

    for (string d : data) {
        angka.push_back(stoi(d));
    }

    if (op == '+') {
        for (int a : angka) {
            result += a;
        }
        return to_string(result);
    }

    if (op == '*') {
        result = 1;
        for (int a : angka) {
            result *= a;
        }
        return to_string(result);
    }


    return "KESALAHAN";
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
