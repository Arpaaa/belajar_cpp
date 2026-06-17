#include <iostream>
#include <vector>

using namespace std;

int selisih(int a, int b) {
    return abs(a - b);
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int N = 0;
    cin >> N;

    int r_terbaik = 1;
    int c_terbaik = N;

    for (int r = 1; r <= N; r++) {
        if (N % r == 0) {
            int c = N / r;
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
