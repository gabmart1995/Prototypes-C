/*
    Programa que imprime un triangulo con un bucle for
    Gabriel Martínez
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << endl;
    int contador = 1;
    
    //lineas verticales
    for (int i = 1; i <= 10; i++)
    {
       if (i == 1)
        {
            cout << "*";
        }

        else 
        {
            //lineas horizontales
            for (int j = 1; j <= contador; j++)
            {
                cout << "*";
            }
        }

        cout << endl;
        contador++; 
    }

    //separacion 
    cout << endl;

    //reinicia la varible contadora
    contador = 1;
    for (int k = 1; k <= 10; k++)
    {        
        for (int l = 10; l >= contador; l--)
        {
            cout << "*";
        }

        cout << endl;
        contador++;
    }
    
    return 0;
}