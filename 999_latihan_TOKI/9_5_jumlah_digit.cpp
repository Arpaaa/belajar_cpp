#include <iostream>
using namespace std;

int jumlah_digit(int n) {
    if (n == 0) {
        return 0;
    }

    return  (n % 10) + jumlah_digit(n / 10);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << jumlah_digit(1982304556) << endl;
}
