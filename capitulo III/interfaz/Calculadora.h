//Diseño de una calculadora basica en C++
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
        void setNumbers(int, int);
        void add();
        void substract();
        void multiply();
        void divider();
        void module();
        int getResultado();
};