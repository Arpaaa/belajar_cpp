#include <iostream>

using namespace std;

int main() {
    int N = 0;
    cin >> N;

    int terbesar = 0;
    int terkecil = 0;

    for (int i = 0; i < N; i++) {
        int x = 0;
        cin >> x;

        terkecil = min(terkecil, x);
        terbesar = max(terbesar, x);
    }

    cout << terbesar << " " << terkecil << endl;
}