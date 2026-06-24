#include <iostream>
#include <string>

using namespace std;

int main() {
    string S{}, T{};
    cin >> S >> T;

    size_t pos = S.find(T);
    while (pos != string::npos) {
        S.erase(pos, T.length());
        pos = S.find(T);
    }

    cout << S << endl;

    return 0;
}