#include <iostream>
#include <future>
#include <chrono>
#include <thread>

// Función que calcula el factorial de un número.
// Simula una tarea que tarda en completarse.

int factorial(int n) {
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simula tarea pesada
    int resultado = 1;
    for (int i = 2; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

// Función principal, donde se lanza la tarea en segundo plano y se espera su resultado.
int main() {
    int numero = 5;

    // Lanza la tarea en un hilo separado usando std::async
    // std::launch::async asegura que se ejecute en un nuevo hilo
    std::future<int> futuro = std::async(std::launch::async, factorial, numero);

    std::cout << "Calculando factorial de " << numero << " en segundo plano...\n";// SE CALCULA EL FACTORIAL EN SEGUNDO PLANO

    // Aquí podrías hacer otras tareas mientras se calcula el factorial
    // Por ejemplo, mostrar un mensaje cada 100 milisegundos mientras esperas el resultado
    // BUCLE QUE MUESTRA UN MENSAJE CADA 200 MILISEGUNDOS HASTA QUE EL FUTURO ESTÉ LISTO

    while (futuro.wait_for(std::chrono::milliseconds(200)) != std::future_status::ready) {
        
    std::cout << "estoy esperando ..." << std::flush;   // SE MUESTRA UN MENSAJE CADA 100 MILISEGUNDOS                                       

    std::this_thread::sleep_for(std::chrono::milliseconds(100));
}


    // Espera y obtiene el resultado
    int resultado = futuro.get();

    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}