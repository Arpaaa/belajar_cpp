#include <bits/stdc++.h>

using namespace std;

int N = 0, K = 0;
vector<int> A;

bool solve() {
    vector<int> ftable(100005, 0);
    for (int x : A) {
        if (x <= 100000)
            ftable[x]++;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int target_K = K - A[i] - A[j];

            if (target_K < 1 || target_K > 100000)
                continue;

            int used = 0;
            if (A[i] == target_K)
                used++;
            if (A[j] == target_K)
                used++;

            if (ftable[target_K] > used) {
                return true;
            }
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
