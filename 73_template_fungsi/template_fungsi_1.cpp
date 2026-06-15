#include <iostream>

using namespace std;

template<typename T>
void print(T data) {
    cout << data << endl;
}

template<typename T>
int toInt(T data) {
    return reinterpret_cast<int>(data);
}

int main() {
    return 0;
}
