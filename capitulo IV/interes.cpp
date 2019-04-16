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

    cout << "\nAño" << setw(21) << "Monto $\n" << endl;

    //establece los parametros
    cout << fixed << setprecision(2);

    for (int i = 1; i <= 10; i++)
    {
        monto = principal * pow(1.0 + tasa, i);

        //imprime en pantalla
        cout << i << setw(21) << monto << endl;
    }

    cout << endl;
    //cierra el programa
    return 0;
}