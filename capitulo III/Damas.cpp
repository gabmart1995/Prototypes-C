//Programa que imprime el patron de damas.
//Gabriel Martínez
#include <iostream>
using namespace std;

int main()
{
    int contador = 1;
    int posicion;

    while (contador <= 8) 
    {
        //determina si es par
        posicion = contador % 2;

        if (posicion == 1)
        {
            for (int i = 1; i <= contador; i++)
            {
                if (i == contador)
                {
                    cout << endl;
                }

                else
                {
                    cout << "* ";
                    cout << " ";
                }
                
            }

            contador++;
        }

        else
        {
            for (int j = 1; j <= contador; j++)
            {
                if (j == contador)
                {
                    cout << endl;
                }

                else
                {
                    cout << " ";
                    cout << "* ";
                }
                
                contador++;
            }
        }
    }

    return 0;
}