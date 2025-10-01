// Ejercicio 3: Clase CuentaBancaria
// Crea una clase CuentaBancaria con atributos titular, saldo. Agrega métodos para:
// Depositar un monto.
// Retirar un monto (solo si hay saldo suficiente).
// Mostrar el saldo actual

#include <iostream>
using namespace std;

class CuentaBancaria {
private:
    string titular;
    float saldo;

public:
    // Constructor para inicializar la cuenta
    void crearCuenta(string nombreTitular, float saldoInicial) {
        titular = nombreTitular;
        saldo = saldoInicial;
    }

    // Método para depositar un monto
    void depositar(float monto) {
        if (monto > 0) {
            saldo += monto;
            cout << "Deposito exitoso. Nuevo saldo: " << saldo << endl;
        } else {
            cout << "El monto a depositar debe ser positivo." << endl;
        }
    }

    // Método para retirar un monto
    void retirar(float monto) {
        if (monto <= saldo && monto > 0) {
            saldo -= monto;
            cout << "Retiro exitoso. Nuevo saldo: " << saldo << endl;
        } else {
            cout << "Fondos insuficientes o monto invalido." << endl;
        }
    }

    // Método para mostrar el saldo actual
    void mostrarSaldo() {
        cout << "Titular: " << titular << endl;
        cout << "Saldo actual: " << saldo << endl;
    }
};

// Función principal
int main() {
    CuentaBancaria cuenta;
    cuenta.crearCuenta("Ana Torres", 1000.0);

    cuenta.mostrarSaldo();
    cuenta.depositar(500.0);
    cuenta.retirar(300.0);
    cuenta.retirar(1500.0); // Intento de retiro mayor al saldo

    return 0;
}
