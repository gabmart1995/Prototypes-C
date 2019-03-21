//programa que determina que es un palindromo
//Gabriel Martínez
#include <iostream>
using namespace std;

int main()
{
    int numero;
    int digito1, digito2, digito3, digito4, digito5;

    cout << "\n\tBienvenido a la clase Palindromo\n" << endl;

    cout << "Ingrese un número: ";
    cin >> numero;

    //operaciones
    digito1 = numero % 10;
    digito2 = digito1 / 10;
    digito3 = digito2 / 10;

    digito4 = (digito1 * 100) + (digito5 * 10) + digito3;

    if (digito4 = numero) 
    {
        cout << "Este numero es un palindromo\n" << endl;
    }

    else 
    {
        cout << "Este numero no es un palindromo\n" << endl;
    }
}