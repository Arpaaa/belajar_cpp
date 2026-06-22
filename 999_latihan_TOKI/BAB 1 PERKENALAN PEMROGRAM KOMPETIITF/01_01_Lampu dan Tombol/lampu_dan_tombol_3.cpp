#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long N = 0;
    cin >> N;

    long long root = round(sqrt(N));

    cout << ((root * root == N) ? "lampu nyala" : "lampu mati") << endl;

    return 0;
}