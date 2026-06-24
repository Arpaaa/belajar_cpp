#include <iostream>

using namespace std;

int factorial(int N) {
    if (N <= 1) return 1;
    return N * factorial(N - 1);
}

int main() {
    int N = 0; cin >> N;

    for (int k = 0; k <= N; k++) {
        int numerator = factorial(N);
        int denumerator = factorial(k) * factorial(N - k);

        int binomial = numerator / denumerator;

        cout << binomial << " ";
    }

    return 0;
}