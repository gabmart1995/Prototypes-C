/*
    Comparacion de enteros mediante la instruccion if, operadores relacionales
    y operadores de igualdad
*/

#include <iostream> 

using std::cout;
using std::cin;
using std::endl;

int main() 
{   
    //variables
    int numero1,
        numero2;

    cout << "Escriba los 2 enteros para comparar: "; //pide los datos al usuario
    cin >> numero1 >> numero2; //lee los enteros por el usuario

    if (numero1 == numero2) 
    {
        cout << numero1 << " == " << numero2 << endl;
    }

    if (numero1 != numero2) 
    {
        cout << numero1 << " != " << numero2 << endl;
    }

    if (numero1 < numero2) 
    {
        cout << numero1 << " < " << numero2 << endl;
    }

    if (numero1 > numero2) 
    {
        cout << numero1 << " > " << numero2 << endl;
    } 

    if (numero1 <= numero2) 
    {
        cout << numero1 << " <= " << numero2 << endl;
    }

    if (numero1 >= numero2) 
    {
        cout << numero1 << " >= " << numero2 << endl;
    } 

    //cierra el programa
    return 0;
}