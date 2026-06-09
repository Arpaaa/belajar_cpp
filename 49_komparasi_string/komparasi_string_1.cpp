#include <iostream>
#include <string>

using namespace std;

int main() {
    char kata[4] = {'u', 'c', 'u', 'p'};
    char pembanding[4] = {'u', 'c', 'u', 'p'};

    cout << (kata == "ucup") << endl;
    //  Result of comparison against a string literal is unspecified (use an explicit string comparison function instead)
    cout << (kata == pembanding) << endl; // Array comparison always evaluates to false

    string kata_string = "ucup";
    cout << (kata_string == "ucup") << endl;

    return 0;
}
