#include <iostream>
#include <thread>
#include <mutex>

int contador = 0;         // Variable compartida
std::mutex mtx;           // Mutex para proteger el acceso

// Función que incrementa el contador muchas veces
void incrementar(int veces) {
    for (int i = 0; i < veces; ++i) {
        std::lock_guard<std::mutex> lock(mtx); // Bloquea el acceso
        ++contador;
    }
}

int main() {
    const int repeticiones = 100000;

    // Crear dos hilos que incrementan el contador
    std::thread t1(incrementar, repeticiones);
    std::thread t2(incrementar, repeticiones);

    // Esperar a que los hilos terminen
    t1.join();
    t2.join();

    std::cout << "Valor final del contador: " << contador << std::endl;

    return 0;
}
