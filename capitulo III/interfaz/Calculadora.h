//Interfaz de una calculadora basica en C++
// @param Gabriel Martínez
#include <iostream>
#include <stdlib.h> //libreria que incluye los subprocesos de consola Bash o Cmd
using namespace std;

class Calculadora {

    private:
        int numero1;
        int numero2;
        int resultado;

    public:
        void mostrarMenu();
        void establecerNumeros(int, int);
        void sumar();
        void restar();
        void multiplicar();
        void dividir();
        void modulo();
        int obtenerResultado();
};