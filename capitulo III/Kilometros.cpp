//codigo cliente 
//Gabriel Martínez
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //variables
    int kilometros;
    int litros;
    double KPL;
    double contadorKilometraje = 0;
    double contadorLitros = 0;
    double totalKPL;

    //mensajes
    cout << "\n\t Clase Kilometraje\n" << endl;
    
    cout << "Escriba los kilometros usados (-1 para salir): ";
    cin >> kilometros;
    
    while(kilometros != -1) 
    {
        cout << "Escriba los litros: ";
        cin >> litros;

        //KPL : kilometros por litro
        KPL = static_cast < double > (kilometros) / static_cast < double > (litros);

        contadorKilometraje += kilometros;
        contadorLitros += litros;

        totalKPL = contadorKilometraje / contadorLitros;

        cout << "KPL en este reabastecimiento: " << setprecision(6) << fixed << KPL
        << endl;

        cout << "Total KPL: " << setprecision(6) << fixed << totalKPL << endl;

        //repite el mensaje
        cout << "\nEscriba los kilometros usados (-1 para salir): ";
        cin >> kilometros;
    }

    //termina el programa
    cout << endl; 
    return 0;
}