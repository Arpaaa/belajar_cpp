#include <iostream>

int main() {
    // Typedef, memebrikan alias pada tipe data

    typedef int I;
    typedef int iVector2D[2];

    I a = 10;
    iVector2D b = {1, 2};

    std::cout << "Nilai a = " << a << std::endl;;
    std::cout << "Nilai b[0] = " << b[0] << "dan b[1] = " << b[1] << std::endl;;

    return 0;
}