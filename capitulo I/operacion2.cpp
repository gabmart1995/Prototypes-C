//Operaciones2.cpp
//Gabriel Martinez
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //variables
    int numero1, numero2, numero3;
    int suma, promedio, producto, menor, mayor;

    cout << "Ingrese 3 números distintos: ";
    cin >> numero1 >> numero2 >> numero3;

    //operaciones
    suma = numero1 + numero2 + numero3;
    producto = numero1 * numero2 * numero3;
    promedio = (numero1 + numero2 + numero3) / 3;

    //mensajes
    cout << "El resultado de la suma es: " << suma << endl;
    cout << "El resultado del producto es: " << producto << endl;
    cout << "El promedio es: " << promedio << endl;

    if (numero1 < numero2 || numero1 < numero3) 
    {
        cout << "El menor es: " << numero1 << endl;
    }

    else if (numero2 < numero1 || numero2 < numero3)
    {
        cout << "El menor es: " << numero2 << endl;
    }

    else if (numero3 < numero2 || numero3 < numero1) 
    {
        cout << "El menor es: " << numero3 << endl;
    }

    if (numero1 > numero2 || numero1 > numero3) 
    {
        cout << "El mayor es: " << numero1 << endl; 
    }

    else if (numero2 > numero1 || numero2 > numero3) 
    {
        cout << "El mayor es: " << numero2 << endl;
    }

    else if (numero3 > numero1 || numero3 > numero2)
    {
        cout << "El mayor es: " << numero3 << endl;
    }

    //cierra el programa
    return 0;
}