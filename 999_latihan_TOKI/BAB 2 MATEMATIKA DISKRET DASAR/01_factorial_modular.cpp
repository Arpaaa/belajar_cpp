#include <iostream>

using namespace std;

int main() {
    cout << "N! mod k" << endl;
    cout << "Masukan nilai N = ";
    long long N = 0;
    cin >> N;
    cout << "Masukan nilai k = ";
    long long K = 0;
    cin >> K;

    long long result = 1;
    /// factorial modular
    for (int i = 1; i <= N; i++) {
        result = (result * i) % K;
        if (result == 0) break;
    }

    cout << result << endl;

    return 0;
}