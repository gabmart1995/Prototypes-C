//Clase que calcula el factoral de un número
//Gabriel Martínez
#include <iostream>
using namespace std;

class Factorial {

    public:
        void establecerNumeros(int);
        void calcularFactorial(int);
        int obtenerFactorial();
        void mostrarMensaje();
        bool obtenerValidacion();

    private:
        int num_factorial;
        bool validacion;
};