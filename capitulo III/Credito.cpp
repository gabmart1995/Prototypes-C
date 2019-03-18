//Programa que determina si algun cliente se ha excedido el numero 
//de credito
//Gabriel Martínez
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //variables
    int n_cuenta;
    double saldo;
    double cargos;
    double creditos;
    double limiteCredito;
    double nuevoSaldo;

    cout << "\n\tClase credito\n" << endl;

    Inicio:
    cout << "Ingrese el número de cuenta (o -1 para salir): ";
    cin >> n_cuenta;

    if (n_cuenta < -1)
    {
        cout << "Ingrese un número de cuenta valido.\n" << endl;
        goto Inicio;
    }

    else
    {
        while (n_cuenta != -1)
        {
            //pide datos al usuario
            cout << "Introduzca el saldo inicial: ";
            cin >> saldo;
            
            cout << "Introduzca los cargos totales: ";
            cin >> cargos;

            cout << "Introduzca los creditos totales: ";
            cin >> creditos;

            cout << "Introduzca el limite de credito: ";
            cin >> limiteCredito;

            //operacion
            nuevoSaldo = (saldo + cargos) - creditos;

            cout << "\nEl nuevo saldo es: " << setprecision(2) << fixed
            << nuevoSaldo << endl;

            if (nuevoSaldo > limiteCredito) 
            {
                cout << "\nCuenta:\t\t" << n_cuenta << endl;
                cout << "Limite de credito:\t" << setprecision(2) << fixed
                << limiteCredito << endl;

                cout << "Saldo:\t\t" << setprecision(2) << fixed << nuevoSaldo << endl;
                cout << "Se excedio el limite se su credito" << endl << endl;
            }

            //repite el mensaje
            cout << "\nIngrese el número de cuenta (o -1 para salir): ";
            cin >> n_cuenta;
        }  
    }
    
    return 0;
}