#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fastio
    string s; cin >> s;

    vector<string> patterns = {"OSN", "ONS", "NOS", "NSO", "SON", "SNO"};

    int maxlen = -1;
    for (int p = 0; p < 6; p++) {
        string target = patterns[p];
        int curlen = 0;
        int idxp = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == target[idxp]) {
                curlen++;
                idxp = (idxp + 1) % 3;
            }
        }

        if (curlen >= 3) {
            maxlen = max(maxlen, curlen);
        }
    }

    cout << maxlen;
}
