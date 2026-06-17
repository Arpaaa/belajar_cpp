#include <iostream>

using namespace std;

int fungsi(int A, int B, int x, int k) {
    if (k == 0) return x;

    int hasil = abs(A * x + B);

    return fungsi(A, B, hasil, k - 1);
}

int main() {
    int A, B, K, x;
    cin >> A >> B >> K >> x;

    cout << fungsi(A, B, x, K) << endl;

    return 0;
}