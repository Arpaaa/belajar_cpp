#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N = 0;
    cin >> N;

    vector<long long> data;

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        data.push_back(x);
    }

    int jumlah = 0;

    for (int i = 0; i < N; i++) {
        jumlah += data[i];
    }

    for (int i = 0; i < N; i++) {
        cout << jumlah - data[i] << endl;
    }

    return 0;
}