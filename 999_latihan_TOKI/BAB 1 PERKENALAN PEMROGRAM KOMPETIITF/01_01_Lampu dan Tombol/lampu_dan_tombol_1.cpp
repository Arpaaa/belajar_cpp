#include <iostream>

using namespace std;

int main() {
    long long N{};
    cin >> N;

    int factors = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) factors++;
    }

    cout << ((factors % 2 == 0) ? "lampu mati" : "lampu nyala") << endl;

    return 0;
}