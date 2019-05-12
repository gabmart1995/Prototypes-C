//programa que calcula el interes compuesto de una cuenta
//Gabriel Martínez
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
    //variables
    double monto;
    double principal = 1000.0;
    double tasa = 0.05;

    //establece los parametros de la variable double
    cout << fixed << setprecision(2);

    cout << "\n\tTasa de Interés compuesto. Aumento 1%" << endl;

    Inicio:
    for (int i = 1; i <= 10; i++)
    {
        monto = principal * pow(1.0 + tasa, i);

        if (i == 1)
        {
            cout << "\nAño" << setw(21) << "Monto $"  << setw(21) 
            << "Tasa: " << tasa << "%\n" << endl;
        }

        //imprime en pantalla
        cout << i << setw(21) << monto << endl;
    }
    
    //separador
     cout << "\n|-----------------------------------------------------|\n" << endl;

    if (tasa <= 0.09)
    {
        tasa += 0.01;
        goto Inicio;
    }

    return 0;

}