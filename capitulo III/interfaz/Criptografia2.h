//Clase Criptografia2
//Programa que decodifica los números de la clase criptografia
#include <iostream>
using namespace std;

class Criptografia2 {

    public: 
    void establecerDigitos(int);
    void establecerDescifrado(int, int, int, int);
    void mostrarCodigoDescifrado();

    private:
    int digito1,
        digito2,
        digito3,
        digito4;
};