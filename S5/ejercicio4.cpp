#include <iostream>
using namespace std;

class Libro {
public:
    string titulo;
    Libro(string t) : titulo(t) {}

    bool operator==(const Libro& otro) {
        return titulo == otro.titulo;
    }
};

int main() {
    Libro l1("C++ Básico"), l2("C++ Básico"), l3("Java");
    cout << (l1 == l2) << endl;  // true → 1
    cout << (l1 == l3) << endl;  // false → 0
    return 0;
}
