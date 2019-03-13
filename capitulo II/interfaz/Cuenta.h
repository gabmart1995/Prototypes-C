//Clase cuenta:
//Gabriel Martínez
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Cuenta 
{
    private:
        int saldo;

    public:
        Cuenta(int); //constructor
        void credit(int);
        void cargar(int);
        int obtenerSaldo();
};
