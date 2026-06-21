#include <iostream>

using namespace std;

int selisih(int a, int b) {
    if (a > b) return a - b;
    return b - a;
}

int total_denda(int selisih) {
    return selisih * 1000;
}

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += total_denda(selisih(jantan[i], betina[i]));
    }

    cout << total << endl;

    return 0;
}