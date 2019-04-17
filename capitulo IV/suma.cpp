/*Escriba un programa para sumar una secuencia de enteros
Gabriel Martínez*/
#include <iostream>
using namespace std;

int main()
{
    int contador;
    int numero = 100;

    cout << "\nIngresa la cantidad de enteros a sumar: ";
    cin >> contador;

    cout << contador << " ";

    for (int i = 1; i <= contador; i++) 
    {
        cout << numero << " ";
        numero += 100;
    }

    cout << endl << endl;
    return 0;
}
