#include <iostream>

#define ID 1

#if ID == 1
    #define LANG "Indonesia"
#elif ID == 2
#   define LANG "Japan"
#else
    #define LANG "English"
#endif

using namespace std;

int main() {
    cout << "Bahasa dipilih: " << LANG << endl;
    return 0;
}
