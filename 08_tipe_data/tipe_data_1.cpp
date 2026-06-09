#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Integer (Bilangan Bulat)
    cout << "Integer (Bilangan Bulat)" << endl;

    int a = 1;                                 // Integer 32 Bit. 1 bit untuk +-. 2^31 = 2.147.483.648. Jadi, range integer adalah -2.147.483.648 sampai 2.147.483.647.
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;      // expected: 4 byte. 4 byte = 32 bit.

    // Memeriksa maks limit dari nilai integer
    //      Secara teori int32 hanya memiliki 2^31 = +-2.147.483.648.
    //      Karena angka 0 juga dihitung, maka batas atas hanya:                             2.147.483.647.
    //      Karena angka 0 sudah masuk ke dalam perhitungan, maka batas bawah bisa memilki: -2.147.483.648.
    cout << "Batas atas int32: ";
    cout << numeric_limits<int>::max() << endl; // numeric_limits<Type> berasal dari std. jadi sebenarnya adalah std::numeric_limits<Type>

    int b = 2147483648;                         // Integer overflow. Nilai ini melebihi batas maksimum integer, sehingga akan terjadi overflow dan menghasilkan nilai yang tidak diharapkan.
    cout << b << endl;

    cout << "Batas bawah int32: ";
    cout << numeric_limits<int>::min() << endl; // numeric_limits<Type> berasal dari std. jadi sebenarnya adalah std::numeric_limits<Type>
    int c = -2147483649;                        // Integer overflow. Nilai ini melebihi batas minimum integer, sehingga akan terjadi overflow dan menghasilkan nilai yang tidak diharapkan.
    cout << c << endl;

    // Long
    cout << endl;
    cout << "Long" << endl;
    long long d = 5;
    cout << sizeof(d) << " byte" << endl;       // Expected: 8 byte

    // Memerika nilai limit dari tipe long long
    //      Karena ukuran long long adalah 8 byte = 64 bit, dan karena 1 bit digunakan untuk +- maka 2^63 = 9.223.372.036.854.775.808
    //      Karena 0 masuk ke bagian bersama batas atas maka, batas atas long long adalah:       = 9223372036854775807
    //      Karena 0 sudah masuk perhitungan, maka batas bawah long logn adalah:                 = -9223372036854775808
    cout << "Batas atas long long: ";
    cout << numeric_limits<long long>::max() << endl;
    cout << "Batas bawah :";
    cout << numeric_limits<long long>::min() << endl;

    // Short
    cout << endl;
    short e = 2;
    cout << sizeof(e) << " byte" << endl;       // Expected: 2 byte

    // Memeriksa limit dari tipe short
    //      Karena ukuran short adalah 2 byte = 16 bit, maka 2^16 = 65536. dan karena 1 bit digunakan untuk +- maka 2^15 = 32768
    //      Karena 0 masuk ke bagian bersama batas atas, maka batas atas short adalah: 32.767
    //      Karena 0 sudah masuk perhitungan, maka batas bawah short adalah: -32.768
    cout << "Batas atas short: ";
    cout << numeric_limits<short>::max() << endl;
    cout << "Batas bawah short: ";
    cout << numeric_limits<short>::min() << endl;

    // short <= int <= long <= long long

    // Float (Bilangan desimal)
    cout << endl;

    cout << "Float" << endl;

    float f = 1.4f;                             // Diakhiri f agar memberi tahu compiler bahwa nilai adalah float
                                                // Jika tidak, maka nilai 1.4 akan bertipe double dan kemudian saat diassign ke variabel bertipa float
                                                // maka akan terjadi konversi dari tipe data double ke float yang akan menghilangkan presisi.
    cout << sizeof(f) << " byte" << endl;       // Expected: 4 byte

    // Memeriksa limit dari tipe float
    //      Karena ukuran float adalah 4 byte = 32 bit, maka 2^32 = 4.294.967.296. Namun, karena float menggunakan representasi ilmiah, maka batas atas float adalah sekitar 3.4028235e+38.
    //      Karena float menggunakan representasi ilmiah, maka batas bawah float adalah sekitar 1.17549435e-38.
    cout << "Batas atas float: ";
    cout << numeric_limits<float>::max() << endl;
    cout << "Batas bawah float: ";
    cout << numeric_limits<float>::min() << endl;

    // Double
    cout << endl;

    cout << "Double" << endl;

    double g = 2.3244;
    cout << sizeof(g) << " byte" << endl;    // Expected: 8 byte

    // Memeriksa nilai limit double
    cout << "Batas atas double: ";
    cout << numeric_limits<double>::max() << endl;
    cout << "Batas bawah double: ";
    cout << numeric_limits<double>::min() << endl;

    // char (Character)
    cout << endl;
    cout << "Char (Character)" << endl;

    // char menggunakan kutip satu
    char h = 'a';                            // Tipe data char digunakan untuk menyimpan karakter tunggal. Nilai char diwakili oleh kode ASCII, di mana 'a' memiliki nilai 97.

    cout << h << endl;
    cout << sizeof(h) << " byte" << endl;    // Expected: 1 byte

    // Boolean
    cout << endl;
    cout << "Boolean" << endl;

    bool i = true;
    bool j = false;

    cout << sizeof(i) << " byte" << endl;
    cout << i << endl;

    // unsigned
    cout << endl;
    cout << "Unsigned" << endl;

    unsigned int k = 124;
    cout << sizeof(k) << " byte" << endl;

    cout << k << endl;

    cout << "Batas atas unsigned int: ";
    cout << numeric_limits<unsigned int>::max() << endl;
    cout << "Batas bawah unsigned int: ";
    cout << numeric_limits<unsigned int>::min() << endl;

    return 0;
}
