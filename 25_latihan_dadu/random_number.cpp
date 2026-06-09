#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    // fungsi rand tidak random, tapi PRNG (Pseudo-Random Number Generator)

    // RUMUS: NextValue = (CurrentValue * A + C) mod M
    //        Default seed adalah 1
    for (int i = 0; i < 5; i++) {
        cout << rand() << endl;
    }

    return 0;
}