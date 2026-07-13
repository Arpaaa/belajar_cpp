// 231A
#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int count = 0;
    for (int i=0;i<n;i++) {
        int agree = 0;
        for (int j=0;j<3;j++) {
            int x; cin >> x;
            if (x == 1) agree++;
        }
        if (agree >= 2) count++;
    }
    cout << count << '\n';
}