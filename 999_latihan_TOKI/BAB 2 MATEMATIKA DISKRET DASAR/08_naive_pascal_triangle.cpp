#include <iostream>

using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

/// Naive Pascal Triangle
/// Calculate C(n, r) for every element
/// n untuk baris dan r untuk suku
int main() {
    int N = 0; cin >> N;

    for (int n = 0; n <= N; n++) {
        for (int k = 0; k < n+1; k++) {
            int numerator = factorial(n);
            int denumerator = factorial(k) * factorial(n - k);

            int binomial= numerator / denumerator;

            cout << binomial << " ";
        }
        cout << endl;
    }

    return 0;
}