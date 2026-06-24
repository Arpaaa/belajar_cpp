#include <iostream>
#include <vector>

using namespace std;

void printArray(const vector<vector<long long> > &data) {
    for (int i = 0; i < data.size(); i++) {
        for (size_t j = data.size() - 1; j > i; j--) {
            cout << " ";
        }

        for (long long j : data[i]) {
            if (j == 0) continue;
            cout  << j << " ";
        }
        cout << endl;
    }
}

int main() {
    long long N = 0;
    cin >> N;

    auto pascal = vector(N, vector<long long>(N + 1));

    for (long long i = 0; i < N; i++) {
        pascal[i][0] = 1;

        for (long long j = 1; j <= i - 1; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }

        pascal[i][i] = 1;
    }


    printArray(pascal);

    return 0;
}
