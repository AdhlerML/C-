
#include <iostream>
#include <vector>
#include <algorithm>
#include <execution> // Necesario para std::execution::par

int main() {
    // Crear un vector con valores del 1 al 10
    std::vector<int> datos(10);
    std::iota(datos.begin(), datos.end(), 1); // Llena con 1, 2, ..., 10

    // Mostrar datos originales
    std::cout << "Datos originales:\n";
    for (int x : datos) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    // Aplicar transformación en paralelo: elevar al cuadrado
    std::transform(std::execution::par, datos.begin(), datos.end(), datos.begin(), [](int x) { return x * x; });
                    

    // Mostrar datos transformados
    std::cout << "Datos transformados (cuadrado):\n";
    for (int x : datos) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}


