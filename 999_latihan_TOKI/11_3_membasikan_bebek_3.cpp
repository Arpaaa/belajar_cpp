#include <iostream>
#include <cmath>

using namespace std;

long long selisih(long long a, long long b) {
    return abs(a - b);
}

int main() {
    long long N = 0;
    cin >> N;

    long long r_terbaik = 1;
    long long c_terbaik = N;

    for (long long r = 1; r <= sqrt(N); r++) {
        if (N % r == 0) {
            long long c =  N / r;
            if (r <= c) {
                if (selisih(r, c) < selisih(r_terbaik, c_terbaik)) {
                    r_terbaik = r;
                    c_terbaik = c;
                }
            }
        }
    }

    cout << r_terbaik << " " << c_terbaik << endl;

    return 0;
}