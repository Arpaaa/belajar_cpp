#include <bits/stdc++.h>

using namespace std;

int N, M, K;

void printMatrix(const vector<vector<int>> &mtx) {
    for (const auto &row : mtx) {
        for (const auto el : row) {
            cout << el << " ";
        }
        cout << endl;
    }
}

void rotate90(vector<vector<int>> &mtx) {
    auto row = mtx.size();
    auto col = mtx.at(0).size();

    auto result = vector(col, vector(row, 0));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[j][row - 1 - i] = mtx[i][j];
        }
    }

    mtx.assign(result.begin(), result.end());
}

void vflip(vector<vector<int>> &mtx) {
    auto row = mtx.size();
    auto col = mtx.at(0).size();

    auto result = vector(row, vector(col, 0));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][col - 1 - j] = mtx[i][j];
        }
    }
    mtx.assign(result.begin(), result.end());
}

void hflip(vector<vector<int>> &mtx) {
    auto row = mtx.size();
    auto col = mtx.at(0).size();

    auto result = vector(row, vector(col, 0));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[row - 1 - i][j] = mtx[i][j];
        }
    }

    mtx.assign(result.begin(), result.end());
}

int main() {
    cin >> N >> M >> K;

    vector<vector<int>> matriks(N, vector<int>(M, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int x;
            cin >> x;
            matriks[i][j] = x;
        }
    }

    for (int i = 0; i < K; i++) {
        string op;
        cin >> op;

        if (op == "|") {
            vflip(matriks);
        } else if (op == "_") {
            hflip(matriks);
        } else {
            int rotate = (stoi(op) / 90);
            for (int i = 0; i < rotate; i++) {
                rotate90(matriks);
            }
        }
    }

    printMatrix(matriks);

    return 0;
}
