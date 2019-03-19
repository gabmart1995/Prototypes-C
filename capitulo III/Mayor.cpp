//Programa que determiina el mayor de 10 números
//Gabriel Martínez
#include <iostream>
using namespace std;

int main()
{
    int contador = 1;
    int mayor = 0;
    int numero;

    cout << "\n\tBienvenido a la clase Mayor\n" << endl;

    while (contador <= 10)
    {
        cout << "Ingrese el número de las unidades vendidas: ";
        cin >> numero;

        if (numero > mayor) 
        {
            mayor = numero;
        }

        contador++;
    }
    
    //imprime el mesaje
    cout << "\nEl número mayor de unidades vendidas es: " << mayor << endl << endl;

    //termina el programa
    return 0;
}