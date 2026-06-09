#include <iostream>
#include <string>

using namespace std;

int main() {
    string input_text;
    cout << "Masukan teks: ";
    getline(cin, input_text);

    size_t pos = 0;
    int words = 0;

    while (true) {
        pos = input_text.find(' ', pos + 1);
        words++;
        // cout << "pos: " << pos << " jumlah: " << words << endl;
        // test test
        if (pos == string::npos) break;
    }

    cout << "Jumlah kata yang kamu masukan adalah: " << words << " kata" << endl;

    return 0;
}