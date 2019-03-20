//Programa que determiina el mayor y el segundo de 10 números
//Gabriel Martínez
#include <iostream>
using namespace std;

int main()
{
    //variables
    int contador = 1;
    int numero;
    int mayor = 0; 
    int segundo = 0;

    cout << "\n\tBienvenido a la clase Mayor\n" << endl;

    while (contador <= 10)
    {
        cout << "Ingrese el número de las unidades vendidas: ";
        cin >> numero;

        if (numero > segundo && numero > mayor) 
        {
           mayor = numero;
        }

        else if (numero > segundo && numero < mayor)
        {
            segundo = numero;
        }
        
        //el contador se incrementa
        contador++;
    }

    //imprime el mesaje
    cout << "\nEl número mayor de unidades vendidas es: " << mayor << endl;
    cout << "El segundo mayor de unidades vendidas es: " << segundo << endl 
    << endl;

    return 0; 
}