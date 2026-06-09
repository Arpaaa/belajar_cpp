#include <iostream>

using namespace std;

int square(int x) {
    return x*x;
}

int main() {
    int input;

    cout << "Kuadrat dari: ";
    cin >> input;

    int result = square(input);
    cout << result << endl;
    cout << square(input) << endl;

    return 0;
}