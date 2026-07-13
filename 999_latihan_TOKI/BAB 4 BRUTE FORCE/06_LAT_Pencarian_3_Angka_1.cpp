#include <bits/stdc++.h>

using namespace std;

int N = 0, K = 0;
vector<int> A;

bool solve() {
    ranges::sort(A);
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int a = A[i];
            int b = A[j];
            int c = K - a - b;
            auto it = A.begin() + j + 1;
            if (binary_search(it, A.end(), c))
                return true;
        }
    }
    return false;
}

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int x = 0;
        cin >> x;
        A.push_back(x);
    }

    cout << ((solve() ? "YA" : "TIDAK")) << endl;

    return 0;
}
