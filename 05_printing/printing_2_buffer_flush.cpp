#include <iostream>

using namespace std;

int main() {
    // GUNAKAN MODE DEBUG DENGAN BREAKPOINT PADA BARIS x
    /*
     * # Cara Kerja cout (Character Out)
     * 1.   "Hello" akan dimasukan ke cout, daripada mencetak satu persatu, cout mengumpulkan semua terlebih dahulu ke dalam buffer. Sehingga
     * 2.   "World" dan "Pertama" akan dimasukan ke buffer.
     * 3.   Ketika cout bertemu dengan endl, maka buffer akan di flush, dan cout akan mencetak ke monitor (console) semua yang sudah terkumpul
     * 4.   flush akan terjadi ketika bertemu endl, cin, flush, program selesai dan buffer penuh.
     * 5.   Buffer penuh tergantung OS, Memori, dll (biasanya 4 KB, 4096 Byte)
     * 6.   Bagaimana jika tidak bertemu?, maka buffer akan tertahan sampai dapat perintah flush, dalam kasus ini. "World Kedua" akan tertahan
     *      Hingga program selesai (return 0)
     */
    cout << "Hello " << "World " << "Pertama" << endl;;
    cout << "Hello" << endl << "World " << "Kedua";
    return 0;
}