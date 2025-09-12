#include <iostream>
using namespace std;

template <typename T>
T menorDeTres(T a, T b, T c) {
    T menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    return menor;
}

int main() {
    cout << menorDeTres(10, 5, 7) << endl;      // 5
    cout << menorDeTres(3.5, 2.1, 4.8) << endl; // 2.1
    return 0;
}
