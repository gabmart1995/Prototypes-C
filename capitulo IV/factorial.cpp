/*
    Programa que usa un bucle for para expresar un factorial
    del 1 al 5

    Gabriel Martínez
*/

#include <iostream>
using namespace std;

int main()
{
    //variables
    int num_factorial = 1;  

    cout << "\n\tNúmeros factoriales del 1 al 5\n" << endl; 

    for(int contador = 1; contador <= 5; contador++)
    {
        num_factorial *= contador;

        cout << "El número factorial "  << contador << " es:\t"
        << num_factorial << endl;
    }

    cout << endl;
    
    return 0;
}