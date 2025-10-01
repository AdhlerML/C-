// Ejercicio 2: Clase Rectángulo
// Crea una clase Rectangulo con atributos base y altura. Incluye métodos para:
// Establecer valores.
// Calcular y retornar el área.
// Calcular y retornar el perímetro.

#include <iostream>
using namespace std;

class Rectangulo {
private:
    float base;
    float altura;

public:
    // Método para establecer valores
    void establecerValores(float b, float h) {
        base = b;
        altura = h;
    }

    // Método para calcular y retornar el área
    float calcularArea() {
        return base * altura;
    }

    // Método para calcular y retornar el perímetro
    float calcularPerimetro() {
        return 2 * (base + altura);
    }
};

// Función principal
int main() {
    Rectangulo rect;
    rect.establecerValores(5.0, 3.0);

    cout << "Area del rectangulo: " << rect.calcularArea() << endl;
    cout << "Perimetro del rectangulo: " << rect.calcularPerimetro() << endl;

    return 0;
}

