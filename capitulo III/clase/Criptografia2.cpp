#include "./../interfaz/Criptografia2.h"

void Criptografia2::establecerDigitos(int entero)
{
    //separa los digitos
    if (entero <= 9999 && entero >= 0)
    {
        digito1 = entero / 1000;
        digito2 = (entero % 1000) / 100;
        digito3 = ((entero % 1000) % 100) / 10;
        digito4 = (((entero % 1000) % 100) % 10);

        establecerDescifrado(digito1, digito2, digito3, digito4);
    }
}

void Criptografia2::establecerDescifrado(int num1, int num2, int num3, int num4)
{
    //mejorar
    digito1 = (digito1 % 10) - 7;
    digito2 = (digito2 % 10) - 7;
    digito3 = (digito3 % 10) - 7;
    digito4 = (digito4 % 10) - 7; 

    mostrarCodigoDescifrado();
}

void Criptografia2::mostrarCodigoDescifrado()
{
    cout << "El numero original es: ";
    cout << digito3 << digito4 << digito1 << digito2 << endl << endl;
}