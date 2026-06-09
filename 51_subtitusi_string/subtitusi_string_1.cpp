#include <string>
#include <iostream>

using namespace std;

int main() {
    string kalimat_1 = "Arfa Luthfi itu orang keren dan jago ngoding";
    string kalimat_2 = "Prabowo sayang sama buna teddy";

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;

    // swap string
    kalimat_1.swap(kalimat_2);

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;

    // replace
    kalimat_1.replace(8, 6, "suka");

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;

    // Insert string
    kalimat_1.insert(23, "mayor ");

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;

    return 0;
}