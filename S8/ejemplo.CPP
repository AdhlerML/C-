#include <iostream>
using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
    double sueldoDiario;
public:

    double calcularSueldoMensual()
    {
        return sueldoDiario * 30;
    }
    void registrarEmleado(string nom, int e, double sueldo)
    {
        nombre = nom;
        edad = e;
        sueldoDiario = sueldo;
    }
   
    void mostrarEmpleado()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " anos" << endl;
        cout << "Sueldo mensual: " << calcularSueldoMensual() << endl;
        cout << "Sueldo diario: " << sueldoDiario << endl;
    }

};

int main()
{
    Persona emp1;

    emp1.registrarEmleado("ADHLER MILLA", 30, 80.50);

    cout << "Datos del empleado: " << endl;
    emp1.mostrarEmpleado();
  
    return 0;
}
