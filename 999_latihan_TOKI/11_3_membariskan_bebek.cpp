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
        for (int c = r; c <= N; c++) {
            if ((r * c) == N) {
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