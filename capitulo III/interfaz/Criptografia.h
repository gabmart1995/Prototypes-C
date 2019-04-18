//Clase criptografía
//Gabriel Martínez
#include <iostream>
using namespace std;

class Criptografia {

    public:        
        void establecerDigitos(int);
        void establecerCriptografia(int, int, int, int);
        void mostrarCodigoCifrado();

    private:
        int digito1, 
            digito2, 
            digito3, 
            digito4;
};