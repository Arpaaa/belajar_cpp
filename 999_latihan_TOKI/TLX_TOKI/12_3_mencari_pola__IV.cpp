#include <iostream>

using namespace std;

int main() {
    int N = 0;
    cin >> N;

    int counter = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << counter;
            counter = (counter + 1) % 10;
        }
        cout << endl;
    }

    return 0;
}
