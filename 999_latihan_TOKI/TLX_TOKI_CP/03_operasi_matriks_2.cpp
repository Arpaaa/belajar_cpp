#include <bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<n;i++)
#define iloop for(int j=0;j<m;i++)
#define swp swap(n, m)
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    fastio
    int n, m, x, v[100][100], b[100][100];
    cin >> n >> m >> x;
    loop { iloop { cin >> v[i][j]; }}
    while (x--) {
        string op; cin >> op;
        if (op == "_") {
            loop { iloop { b[i][j] = v[n - 1 - i][j]; }}
        } else if (op == "|") {
            loop { iloop { b[i][j] = v[i][m - 1 -j]; }}
        } else if (op == "90") {
            loop { iloop { b[j][n - 1 - i] = v[i][j]; }}
        } else if (op == "180") {
            loop { iloop { b[m - j ] }}
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// #define bismillah for(int i=0;i<n;i++)
// #define medal for(int j=0;j<m;j++)
// #define bismillah_medal ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define mbg swap(n,m)
//
// signed main() {
//     bismillah_medal
//     int n, m, x, v[100][100], b[100][100];
//     cin >> n >> m >> x;
//     bismillah { medal { cin >> v[i][j]; } }
//     while (x--) {
//         string op;
//         cin >> op;
//         if (op == "_") { bismillah { medal { b[i][j] = v[n - 1 - i][j]; } } } else if (op == "|") {
//             bismillah { medal { b[i][j] = v[i][m - 1 - j]; } }
//         } else if (op == "90") {
//             bismillah { medal { b[j][n - 1 - i] = v[i][j]; } }
//             mbg;
//         } else if (op == "180") { bismillah { medal { b[n - 1 - i][m - 1 - j] = v[i][j]; } } } else {
//             bismillah { medal { b[m - 1 - j][i] = v[i][j]; } }
//             mbg;
//         }
//         bismillah { medal { v[i][j] = b[i][j]; } }
//     }
//     bismillah {
//         medal { cout << v[i][j] << ' '; }
//         cout << endl;
//     }
// }
