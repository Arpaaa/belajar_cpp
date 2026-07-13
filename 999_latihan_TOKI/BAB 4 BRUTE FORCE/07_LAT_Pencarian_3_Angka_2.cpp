#include <bits/stdc++.h>

using namespace std;

int N = 0, K = 0;
vector<int> A;

bool solve() {
    ranges::sort(A);

    for (int i = 0; i < N - 2; i++) {
        int left = i + 1;
        int right = N - 1;
        while (left < right) {
            int sum = A[i] + A[left] + A[right];
            if (sum == K) {
                return true;
            } else if (sum < K) {
                left++;
            } else {
                right--;
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
