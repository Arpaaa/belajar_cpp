#include <bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<n;i++)
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,k; cin >> n >> k; vector<int> a(n);
    loop { cin >> a[i]; }
    ranges::sort(a);

    int left = 0, right = n - 1, count = 0;
    while (left < right) {
        int total = a[left] + a[right];
        if (total == k) {
            count++; left++; right--; continue;
        }
        (total < k) ? left++ : right--;
    }
    cout << count << '\n';
}