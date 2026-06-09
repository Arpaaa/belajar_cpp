#include <iostream>

using namespace std;

int main() {
    cout << "Panjang alas segitiga: ";

    int N = 4;
    // cin >> N;

    cout << "\nPola 1" << endl;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 2" << endl;
    for (int i = 1; i <= N; i++) {
        for (int j = N; j >= i; j--) {
            cout << "*";
        }
        cout << endl;;
    }

    cout << "\nPola 3" << endl;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = N; k >= i; k--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 4" << endl;
    for (int i = 1; i <= N; i++) {
        for (int j = N; j > i; j--) {
            cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        cout << endl;
    }

    cout << "\nPola 5" << endl;
    for (int i = 1; i <= N; i++) {
        for (int j = N; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= ((2*i) - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 6" << endl;
    // for (int i = 1; i <= N; i++) {
    //     for (int j = 1; j < i; j++) {
    //         cout << " ";
    //     }
    //
    //     int Un =     ((2 * N - 1) + (i - 1) * (-2));
    //     for (int k = 1; k <= Un; k++) {
    //     cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = N; k >= 2 * i - N; k--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 7" << endl;
    for (int i = 1; i <= N; i++) {
        for (int j = N; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= ((2*i) - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 2; i <= N; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = N; k >= 2 * i - N; k--) {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}