/*
    Interfaz del numero de Euler
    Gabriel Martínez
*/
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

class Euler {

    public:
        void establecerNumeros(int, int);
        void calcularEuler(int);
        void calcularEulerExponencial(int);
        double obtenerEuler();
        void mostrarMensaje();
        bool obtenerValidacion();
        void mostrarMensaje2();

    private:
        double num_euler;
        double num_factorial;
        bool validacion;
};