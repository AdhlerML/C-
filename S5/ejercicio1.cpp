#include <iostream>
using namespace std;

class Punto {
public:
    int x, y;

    Punto(int x, int y) : x(x), y(y) {}

    Punto operator+(const Punto& p) {
        return Punto(x + p.x, y + p.y);
    }
};

int main() {
    Punto a(3, 4), b(1, 2);
    Punto c = a + b;
    cout << c.x << ", " << c.y;
    return 0;
}
