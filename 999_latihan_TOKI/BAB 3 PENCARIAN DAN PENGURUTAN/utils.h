#ifndef BELAJAR_CPP_UTILS_H
#define BELAJAR_CPP_UTILS_H

#include <vector>
#include <string>

using namespace std;

// =========================================================================
//                      PROTOTYPE / DEKLARASI (INTERFACE
// =========================================================================

template <typename T>
void printArray(const vector<T> &array, const string &delimiter = " ");


// =========================================================================
//                              IMPLEMENTASI
// =========================================================================

template <typename T>
void printArray(const vector<T> &array, const string &delimiter) {
    for (auto el : array) {
        cout << el << delimiter;
    }
    cout << endl;
}

#endif //BELAJAR_CPP_UTILS_H
