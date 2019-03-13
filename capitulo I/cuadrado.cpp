//programa que calcula los cuadrados del 0 al 10
//Gabriel Martínez
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
    // se inicializan las variables
    int numero = 10,
        cuadrado = 100,
        cubo = 1000;

    //mensaje en pantalla
    cout << "numero\t" << "cuadrado\t" << "cubo" << endl;

    //ciclo for:
    for (int i = 0; i <= 10; i++) 
    {   
        //numero
        cout << numero << "\t";
        
        cuadrado = numero * numero;
        cout << cuadrado << "\t\t";

        cubo = numero * numero * numero;
        cout << cubo << endl;

        //reinicia el ciclo
        numero--;
    } 

    return 0;
}