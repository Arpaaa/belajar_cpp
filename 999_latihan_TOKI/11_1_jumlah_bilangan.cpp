#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> data;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        data.push_back(x);
    }
}