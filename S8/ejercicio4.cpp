
// Ejercicio 4: Clase Producto
// Crea una clase Producto con los atributos nombre, precio, stock. Agrega métodos para:
// Vender productos (descontar stock si hay unidades disponibles).
// Mostrar información del producto.
// Actualizar el stock.

#include <iostream>
using namespace std;




class Producto {
private:
    string nombre;
    float precio;
    int stock;

public:
    // Método para establecer los valores iniciales
    void establecerDatos(string n, float p, int s) {
        nombre = n;
        precio = p;
        stock = s;
    }

    // Método para vender productos
    void vender(int cantidad) {
        if (cantidad <= stock && cantidad > 0) {
            stock -= cantidad;
            cout << "Venta realizada. Unidades vendidas: " << cantidad << endl;
        } else {
            cout << "No hay suficiente stock para realizar la venta." << endl;
        }
    }

    // Método para mostrar información del producto
    void mostrarInformacion() {
        cout << "Producto: " << nombre << endl;
        cout << "Precio: S/ " << precio << endl;
        cout << "Stock disponible: " << stock << " unidades" << endl;
    }

    // Método para actualizar el stock
    void actualizarStock(int cantidad) {
        if (cantidad > 0) {
            stock += cantidad;
            cout << "Stock actualizado. Nuevo stock: " << stock << " unidades" << endl;
        } else {
            cout << "Cantidad inválida para actualizar el stock." << endl;
        }
    }
};

// Función principal
int main() {
    Producto prod;
    prod.establecerDatos("Laptop Lenovo", 2500.0, 10);

    prod.mostrarInformacion();
    prod.vender(3);
    prod.actualizarStock(5);
    prod.vender(15); // Intento de venta con stock insuficiente
    prod.mostrarInformacion();

    return 0;
}