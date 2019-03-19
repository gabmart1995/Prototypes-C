//Comisiones en ventas de quimicos
//Gabriel Martinez
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //variables
    double ventas;
    double salario;
    int porcentaje = 9;

    cout << "\n\tBienvenido a la clase Ingresos\n" << endl;
   
    Inicio:
    cout << "Introduzca las ventas en dolares (-1 para salir): ";
    cin >> ventas;

    if (ventas < -1) 
    {
       cout << "Introduzca un monto de ventas valido\n" << endl;
       goto Inicio;
    }

    else
    {
         while (ventas != -1)
        {
            salario = (ventas * porcentaje) / 100; 
            salario += 200;

            cout << "El salario es: $" << setprecision(2) << fixed << salario
            << endl;

            cout << "\nIntroduzca las ventas en dolares (-1 para salir): ";
            cin >> ventas; 
        }
    }

    return 0;
}