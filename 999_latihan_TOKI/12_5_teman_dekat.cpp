#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void printPair(const pair<int, int> &pasangan) {
    cout << pasangan.first << " " << pasangan.second << endl;
}

void printPairArray(const vector<pair<int, int>> &data) {
    for (auto &d : data) {
        printPair(d);
    }
}

int calculateDistance(const pair<int, int> &A, const pair<int, int> &B, const int D) {
    return pow(abs(B.first - A.first),D) + pow(abs(B.second - A.second),D);
}

int main() {
    int N, D;
    cin >> N >> D;

    vector<pair<int, int>> friends{};

    for (int i = 0; i < N; i++) {
        int firstValue, secondValue;
        cin >> firstValue >> secondValue;

        friends.emplace_back(firstValue, secondValue);
    }

    vector<int> distances{};

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int distance =  calculateDistance(friends[i], friends[j], D);
            distances.push_back(distance);
        }
    }

    int min_distance = distances[0];
    int max_distance = distances[0];

    for (int i = 1; i < distances.size() - 1; i++) {
        min_distance = min(min_distance, distances[i]);
        max_distance = max(max_distance, distances[i]);
    }

    cout << min_distance << " " << max_distance << endl;

    return 0;
}