

// Ejercicio 1: Clase Estudiante
// Crea una clase Estudiante con los atributos: nombre, edad y notaFinal. Agrega métodos para:
// Asignar valores a los atributos.
// Mostrar los datos del estudiante.
// Mostrar si el estudiante aprobó (nota ≥ 11).
#include <iostream>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    float notaFinal;

public:
    // Método para asignar valores
    void asignarDatos(string n, int e, float nota) {
        nombre = n;
        edad = e;
        notaFinal = nota;
    }

    // Método para mostrar los datos
    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Nota Final: " << notaFinal << endl;
    }

    // Método para verificar si aprobó
    void verificarAprobacion() {
        if (notaFinal >= 11.0) {
            cout << "El estudiante ha aprobado." << endl;
        } else {
            cout << "El estudiante no ha aprobado." << endl;
        }
    }
};

// Función principal
int main() {
    Estudiante est;
    est.asignarDatos("MILLA LEON", 20, 13.5);
    est.mostrarDatos();
    est.verificarAprobacion();

    return 0;
}
