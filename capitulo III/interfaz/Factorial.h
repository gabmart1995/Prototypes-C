//Clase que calcula el factoral de un número
//Gabriel Martínez
#include <iostream>
#include <iomanip>
using namespace std;

class Factorial {

    public:
        void establecerNumeros(int);
        void calcularFactorial(int);
        int obtenerFactorial();
        void mostrarMensaje();

    private:
        int numero;
        int num_factorial;
};