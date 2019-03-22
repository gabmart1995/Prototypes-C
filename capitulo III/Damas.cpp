//Programa que imprime el patron de damas.
//Gabriel Martínez
#include <iostream>
using namespace std;

int main()
{
    int contador = 1;
    int modulo;

    cout << endl;

    while (contador <= 8) 
    {
        //determina si es par
        modulo = contador % 2;

        if (modulo == 1)
        {
            for (int i = 1; i <= 8; i++)
            {
                if (i == 8)
                {
                    cout << endl;
                }

                else
                {
                    cout << "* ";
                    cout << " ";
                }
                
            }
        }

        else
        {
            for (int j = 1; j <= 8; j++)
            {
                if (j == 8)
                {
                    cout << endl;
                }

                else
                {
                    cout << " ";
                    cout << "* ";
                }
            }
        }

        contador++;
    }
    
    cout << endl;
    return 0;
}