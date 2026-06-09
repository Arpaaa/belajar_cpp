#include <iostream>
#include <array>

using namespace std;

const size_t ARRAY_SIZE = 10;

bool is_sorted(const array<int, ARRAY_SIZE> &arrayRef);

void selection_sort(array<int, ARRAY_SIZE> &arrayRef);

void printArrayInt(const array<int, ARRAY_SIZE> &arrayRef);

int main() {
    array<int, ARRAY_SIZE> acak = {3, 6, 1, 8, 2, 4, 7, 9, 5, 0};
    array<int, ARRAY_SIZE> tidakAcak = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << is_sorted(acak) << endl;
    cout << is_sorted(tidakAcak) << endl;

    selection_sort(acak);

    cout << is_sorted(acak) << endl;
    printArrayInt(acak);

    return 0;
}

void printArrayInt(const array<int, ARRAY_SIZE> &arrayRef) {
    cout << "Array: ";
    for (const int &value: arrayRef) {
        cout << value << " ";
    }
    cout << endl;
}

bool is_sorted(const array<int, ARRAY_SIZE> &arrayRef) {
    bool result = true;
    const size_t arraySize = arrayRef.size();

    for (size_t i = 0; i < arraySize - 1; i++) {
        int currentValue = arrayRef[i];
        int nextValue = arrayRef[i + 1];

        if (currentValue > nextValue) {
            result = false;
            break;
        }
    }

    return result;
}

void selection_sort(array<int, ARRAY_SIZE> &arrayRef) {
    bool swapped;
    size_t n = arrayRef.size();

    for (size_t i = 0; i < n - 1; i++) {
        size_t min_index = i;
        for (size_t j = i + 1; j < n; j++) {
            if (arrayRef[min_index] > arrayRef[j]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            swap(arrayRef[min_index], arrayRef[i]);
        }
    }
}
