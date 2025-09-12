#include <iostream>
using namespace std;

template <typename T>
T mayor(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << mayor(10, 20) << endl;       // int
    cout << mayor(3.5, 2.8) << endl;     // double
    cout << mayor('a', 'z') << endl;     // char
    return 0;
}
