#include <iostream>
#include <vector>

using namespace std;

void printMatrix(const vector<vector<int>> &matrix) {
    for (const auto & i : matrix) {
        for (const int j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }
}

int main() {
    int N, M, P;
    cin >> N >> M >> P;

    vector<vector<int> > A(N, vector<int>(M, 0));

    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    // cout << N << M << P;

    vector<vector<int> > B(M, vector<int>(P, 0));

    for (size_t i = 0; i < M; i++) {
        for (size_t j = 0; j < P; j++) {
            cin >> B[i][j];
        }
    }


    vector<vector<int> > C(N, vector<int>(P, 0));

    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < P; j++) {
            for (size_t k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printMatrix(C);

    return 0;
}
