#include <iostream>
#include <string>
using namespace std;

bool polindrom(string s) {
    size_t mid = s.length() / 2;
    size_t end_pointer = s.length() - 1;

    for (size_t i = 0; i < mid; i++, end_pointer--) {
        if (s[i] != s[end_pointer]) return false;
    }

    return true;
}

bool polindrom_rekursif(string s) {
    if (s.length() == 0) return true;
    if (s.front() != s.back()) return false;

    return polindrom_rekursif(s.substr(1, s.length() - 2));
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    string s = "test";

    cout << polindrom("") << endl;
    cout << polindrom("x") << endl;
    cout << polindrom("aa") << endl;
    cout << polindrom("ab") << endl;
    cout << polindrom("ini") << endl;
    cout << polindrom("itu") << endl;
    cout << polindrom("anna") << endl;
    cout << polindrom("ibu ratna antar ubi") << endl;
    cout << polindrom("rumah murah") << endl;
    cout << polindrom("aku suka rajawali bapak apabila wajar aku suka") << endl;

    cout << "Polindrom Rekursif" << endl;

    cout << polindrom_rekursif("") << endl;
    cout << polindrom_rekursif("x") << endl;
    cout << polindrom_rekursif("aa") << endl;
    cout << polindrom_rekursif("ab") << endl;
    cout << polindrom_rekursif("ini") << endl;
    cout << polindrom_rekursif("itu") << endl;
    cout << polindrom_rekursif("anna") << endl;
    cout << polindrom_rekursif("ibu ratna antar ubi") << endl;
    cout << polindrom_rekursif("rumah murah") << endl;
    cout << polindrom_rekursif("aku suka rajawali bapak apabila wajar aku suka") << endl;
}
