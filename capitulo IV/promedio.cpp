/*
    Escriba un programa que utilice una instruccion for para calcular 
    e imprimir el promedio de varios enteros
*/

#include <iostream>
using namespace std;

int main()
{
    int numero = 0;
    int suma = 0;
    int contador = 0;
    int promedio = 0;
    bool limite = true;

    cout << "\n\tBienvenido al ciclo for\n" << endl;

    for (contador; limite == true; contador++)
    {
        cout << "Ingrese un número mayor o igual a 0 (9999 para salir): ";
        cin >> numero;

        if (numero >= 0)
        {
            if (numero != 9999)
            {
                 suma += numero;
            }

            else if (numero == 9999)
            {
                promedio = suma / contador;
                break;  
            }
        }

        else 
        {
            cout << "Ingrese un valor mayor o igual a 0" << endl;
            break;
        }
    }

    cout << "\nEl resultado del promedio es: " << promedio << endl
    << endl;

    return 0;
}