#include <iostream>
#include <vector>
#include <thread>
#include <numeric> // std::accumulate

// Función que suma una parte del vector
void partial_sum(const std::vector<int>& data, int start, int end, int& result) {
    result = std::accumulate(data.begin() + start, data.begin() + end, 0);
}

int main() {
    // Datos de ejemplo
    std::vector<int> data(1000, 1); // Vector con 1000 elementos, todos con valor 1

    // Resultados parciales
    int result1 = 0, result2 = 0;

    // Crear dos hilos para sumar dos mitades del vector
    std::thread t1(partial_sum, std::ref(data), 0, data.size() / 2, std::ref(result1));
    std::thread t2(partial_sum, std::ref(data), data.size() / 2, data.size(), std::ref(result2));

    // Esperar a que los hilos terminen
    t1.join();
    t2.join();

    // Sumar los resultados parciales
    int total = result1 + result2;

    std::cout << "Suma total: " << total << std::endl;

    return 0;
}
