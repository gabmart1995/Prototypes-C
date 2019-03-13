//comparacion2.cpp
//Gabriel Martínez

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
    int numero1,
        numero2;

    cout << "Ingrese 2 números: ";
    cin >> numero1 >> numero2;

    if (numero1 > numero2) 
    {
        cout << numero1 << " es más grande" << endl;
    }

    else if (numero1 < numero2) 
    {
        cout << numero2 << " es más grande" << endl;
    }

    else 
    {
        cout << "Estos números son iguales" << endl;
    }

    return 0;
}