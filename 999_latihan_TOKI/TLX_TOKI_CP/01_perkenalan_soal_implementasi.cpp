#include <bits/stdc++.h>

using namespace std;

void printMatriks(vector<vector<int>> &matriks) {
    for (auto row : matriks) {
        for (auto el : row) {
            cout << el << " ";
        }
        cout << endl;
    }
}

int main() {
    int N = 0, M = 0;
    cin >> N >> M;

    vector<vector<int>> matriks(M, vector<int>(N, 0));
    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < M; j++) {
            int x = 0;
            cin >> x;
            matriks[j][i] = x;
        }
    }

    printMatriks(matriks);

    return 0;
}
