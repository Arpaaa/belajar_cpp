#include <iostream>

using namespace std;

int main() {
    int N = 1;
    cout << "Masukan nilai N: " << endl;

    int f_n;

    for (int i = 1; i <= N; i++) {
        f_n += i;
    }

    return 0;
}