//Instruncción break para salir de la instrucción for
//Gabriel Martínez

#include <iostream>
using namespace std;

int main()
{
    int cuenta;

    for (cuenta = 1; cuenta <= 10; cuenta++)
    {
        if (cuenta == 5)
        {
            break; //rompe con bucle for cuando llegue a 5
        }

        cout << cuenta << " ";
    }

    cout << "\nSalio del ciclo en cuenta = " << cuenta << endl;
    return 0;
}
