#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(const unsigned short &val, const string &name) {
    cout << name << " = " << bitset<8>(val) << endl;
}

int main() {
    unsigned short a = 7;

    printBinary(a, "a");

    return 0;
}