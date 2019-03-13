//modulo.cpp
//Gabriel Martínez
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //variables
    int numero,
        resultado;

    cout << "Ingrese un número para saber si es par o impar: ";
    cin >> numero;

    //operación
    resultado = numero % 2;

    if (resultado == 1)
    {
        cout << "Este número es impar" << endl;
    }

    else 
    {
        cout << "Este número es par" << endl;
    }
}