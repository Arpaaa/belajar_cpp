#include <iostream>

using namespace std;

int factorial(int x) {
    if (x <= 1) return 1;
    return x * factorial(x - 1);
}

int main() {
    int x, hasil;
    cout << "Faktorial dari: ";
    cin >> x;

    cout << "Faktorial dari " << x << " adalah " << factorial(x) << endl;

    return 0;
}