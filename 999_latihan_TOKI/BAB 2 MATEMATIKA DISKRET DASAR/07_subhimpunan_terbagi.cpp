#include <iostream>
#include <vector>

using namespace std;


/*
 * Anda diberikan sebuah array A berisi N bilangan bulat non-negatif. Anda ditantang
 * untuk memilih angka-angka dari array-nya yang jika dijumlahkan habis dibagi N. Angka
 * di suatu indeks array tidak boleh dipilih lebih dari sekali.
 * Apabila mungkin, cetak indeks angka-angka yang Anda ambil. Sementara apabila
 * tidak mungkin, cetak "tidak mungkin".
 */

void printArray(const vector<int> &arr) {
    for (const auto e: arr) {
        cout << e << " ";
    }
    cout << endl;
}

vector<int> findDevisibleSubsequence(const vector<int> &arr, const int N) {
    vector<int> sum(N + 1, 0);
    sum[0] = 0;

    for (int i = 1; i <= N; i++) {
        sum[i] = sum[i - 1] + arr[i - 1];
    }

    vector<int> seeInIndex(N, -1);

    for (int i = 0; i <= N; i++) {
        if (seeInIndex[sum[i] % N] == -1) {
            seeInIndex[sum[i] % N] = i;
        } else {
            const int a = seeInIndex[sum[i] % N];
            const int b = i;

            vector<int> result;
            for (int k = a + 1; k <= b; ++k) {
                result.push_back(k);
            }

            return result;
        }
    }
    return {};
}

int main() {
    int N = 0;
    cin >> N;

    vector<int> array;

    for (int i = 0; i < N; i++) {
        int val = 0;
        cin >> val;
        array.push_back(val);
    }

    auto result = findDevisibleSubsequence(array, N);

    printArray(result);


    return 0;
}
