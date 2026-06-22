#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long N{};
    cin >> N;

    int divisorCount = 1;
    long long num = N;

    for (int i = 2; i <= sqrt(num); i++) {
        int factorCount = 0;
        while (num % i == 0) {
            factorCount++;
            num /= i;
        }

        divisorCount *= (1 + factorCount);
    }
    
    if (num > 1) divisorCount *= 2;

    cout << divisorCount << endl;

    cout << ((divisorCount % 2 == 0) ? "lampu mati" : "lampu nyala") << endl;

    return 0;
}
