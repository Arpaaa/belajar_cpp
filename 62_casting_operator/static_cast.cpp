#include <iostream>
#include <string>

using namespace std;

int main() {
    /// static_cast - melakukan konversi tipe data yang masih masuk akal dan kompatibel
    ///               secara logika. Misal dari float ke int, atau dari int8_t ke int

    double pi = 3.14159;
    int pi_bulat = static_cast<int>(pi);

    return 0;
}
