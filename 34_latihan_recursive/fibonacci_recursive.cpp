#include <iostream>

using namespace std;

int fibonacci(int n);

int main() {
    int n;
    cout << "Fibonacci dari: ";
    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
