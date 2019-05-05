/*
    ¿Que imprime el siguiente programa?

    Imprime un cuadrado donde x corresponde los espacios
    y la coordenada y corresponde los elementos a imprimir
*/
#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;

    Inicio:

    cout << "\nEscriba dos enteros entre el rango del 1 al 20: ";
    cin >> x >> y;

    if ((x > 0) && (x <= 20))
    {
        if ((y > 0) && (y <= 20))
        {
            for (int i = 1; i <= y; i++)
            {
                for (int j = 1; j <= x; j++)
                {
                    cout << "@";
                }

                cout << endl;
            }
        }

        else 
        {
            cout << "La segunda coordenada que ingreso es incorrecto" << endl;
            goto Inicio;
        }
    }

    else 
    {
        cout << "La primera coordenada que ingreso es incorrecto" << endl;
        goto Inicio; 
    }

    return 0;
}