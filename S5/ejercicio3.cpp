#include <iostream>
using namespace std;

template <typename T>
T multiplicar(T a, T b) {
    return a * b;
}

int main() {
    cout << multiplicar(2, 3);
    cout << multiplicar("Hola", 2);
    return 0;
}
