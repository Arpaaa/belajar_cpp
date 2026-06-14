#include <iostream>

#define FOO 5
// ifdef
#ifdef FOO
#define TEST_FOO "foo ada"
#else
#define TEST_FOO "foo tidak ada"
#endif


#ifndef FOO
#define FOO 10
#endif

using namespace std;

int main() {
    cout << TEST_FOO << endl;
    cout << FOO << endl;
    return 0;
}