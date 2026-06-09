#include <iostream>

using namespace std;

int main() {
    cout << "Masukan angka N: ";
    int N = 1;

    cin >> N;

    // f(n) = f(n-1) + f(n-2)
    int fn1;
    int fn2;
    int fn;

    fn1 = 1;
    fn2 = 0;

    for (int i = 1; i <= N; i++) {
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        cout << fn << endl;
    }

}