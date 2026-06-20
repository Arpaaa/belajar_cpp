#include <iostream>

using namespace std;

void cetakGunung(int N) {
    if (N == 1) {
        cout << "*\n";
        return;
    }

    cetakGunung(N - 1); // Diawali N - 1

    for (int i = 0; i < N; i++) {
        cout << "*";   // Cetak * sebanyak N
    }
    cout << "\n";

    cetakGunung(N - 1);
    }

int main() {
    int N = 0;
    cin >> N;

    cetakGunung(N);

    return 0;
}