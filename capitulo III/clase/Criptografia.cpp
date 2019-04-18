//clase cifrado
#include "./../interfaz/Criptografia.h"

void Criptografia::establecerDigitos(int entero)
{
    //valida la entrada de 4 digitos y separa el entero
    if (entero <= 9999 && entero >= 0) 
    {
        digito1 = entero / 1000;
        digito2 = (entero % 1000) / 100;
        digito3 = ((entero % 1000) % 100) / 10;
        digito4 = (((entero % 1000) % 100) % 10);

        //crea la criptografia
        establecerCriptografia(digito1, digito2, digito3, digito4);
    } 

    else 
    {
        cout << "Introduzca un numero de 4 digitos valido" << endl;
    } 
}

void Criptografia::establecerCriptografia(int num1, int num2, int num3, int num4)
{
    digito1 = (digito1 + 7) % 10;
    digito2 = (digito2 + 7) % 10;
    digito3 = (digito3 + 7) % 10;
    digito4 = (digito4 + 7) % 10;

    //muestra el codigo cifrado
    mostrarCodigoCifrado();
}

void Criptografia::mostrarCodigoCifrado()
{
    cout << "El codigo cifrado es: "; 
    cout << digito3 << digito4 << digito1 << digito2 << endl << endl;
}