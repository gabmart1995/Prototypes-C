//Interfaz empleado
//Gabriel Martínez
#include <iostream>
#include <string>

using namespace std;

class Empleado {
    
    private:
        string nombre;
        string apellido;
        int sueldo;

    public:
        Empleado(int, string, string);
        
        void establecerNombre(string);
        string obtenerNombre();

        void establecerApellido(string);
        string obtenerApellido();

        void establecerSueldo(int);
        int obtenerSueldo(); 

        int obtenerSalarioAnual();
        int obtenerAumento();
};