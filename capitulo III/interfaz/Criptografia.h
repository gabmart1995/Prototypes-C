//Clase criptografía
//Gabriel Martínez
#include <iostream>
using namespace std;

class Criptografia {

    public:        
        void establecerCifrado(int);
        void mostrarCodigoCifrado();

       /* void establecerDescifrado(int);
        int obtenerNumeroDescifrado();*/

    private:
        int numero_cifrado;
        int digito1, digito2, digito3, digito4;
};