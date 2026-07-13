#include <iostream>
#include <vector>

using namespace std;

int N = 0, K = 0;
vector<int> numbers{};

bool solve(int index, int sum) {
    if (index == N) {
        if (sum == K) {
            return true;
        } else {
            return false;
        }
    }

    bool option1 = solve(index + 1, sum + ::numbers[index]);
    bool option2 = solve(index + 1, sum);

    return (option1 || option2);
}

bool solveSubsetSum() { return solve(0, 0); }

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int x = 0;
        cin >> x;
        ::numbers.push_back(x);
    }

    cout << solveSubsetSum() << endl;

    return 0;
}
