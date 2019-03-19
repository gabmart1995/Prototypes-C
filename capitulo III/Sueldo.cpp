//clase sueldo
//Gabriel Martinez
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //variables
    int horas, horasExtras;
    double tarifa, cuotaExtra;
    double salario;

    cout << "\n\tBienvenido a la clase sueldo\n" << endl;

    Inicio:
    cout << "Ingrese las horas trabajadas (-1 para salir): ";
    cin >> horas;

    if (horas < -1)
    {
         cout << "Introduzca un monto de horas valido\n" << endl;
       goto Inicio;
    } 

    else
    {
        while (horas != -1)
        {
            cout << "Introduzca la tarifa por horas del empleado ($00.00): ";
            cin >> tarifa;
            
            //operacion
            if (horas > 40) 
            {
                //operacion
                cuotaExtra = tarifa / 2;
                horasExtras = horas - 40;
                
                cuotaExtra *= horasExtras;

                salario = (horas * tarifa) + cuotaExtra;
            }

            else 
            {
                salario = tarifa * horas;
            }

            cout << "El salario es: $" << setprecision(2) << fixed << salario 
            << endl;

            cout << "\nIngrese las horas trabajadas (-1 para salir): ";
            cin >> horas;
        }
        
    }
    
    return 0;
}