#include <bits/stdc++.h>

using namespace std;

int N = 0, K = 0;
vector<int> A;

bool solve(int i, int sum) {
    if (i == N) {
        if (sum == K)
            return true;
        return false;
    }

    if (sum > K)
        return false;

    bool opt1 = solve(i + 1, sum + A[i]);
    bool opt2 = solve(i + 1, sum);

    return (opt1 || opt2);
}

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int x = 0;
        cin >> x;
        A.push_back(x);
    }

    cout << ((solve(0, 0) ? "YA" : "TIDAK")) << endl;

    return 0;
}
