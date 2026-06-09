#include <iostream>

using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main() {
    int a = 5;

    cout << "address dari a " << &a << endl;
    cout << "nilai dari a " << a << endl;

    fungsi(a);
    cout << "nilai dari a " << a << endl;

    kuadrat(a);
    cout << "nilai dari a " << a << endl;

    return 0;
}

void fungsi(int &b) {
    b = 10;
    cout << "address dari b " << &b << endl;
    cout << "nilai dari b " << b << endl;
}

void kuadrat(int &val) {
    val = val * val;
}
