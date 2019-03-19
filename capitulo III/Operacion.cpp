//Programa que imprime de forma tabuladas las potencias
//Gabriel Martínez
#include <iostream>
using namespace std;

int main()
{
    int numero = 1;
    int resultado1, resultado2, resultado3;

    cout << "\n\tClase operación" << endl;
    cout << "\nN\t10*N\t100*N\t1000*N\n" << endl;

    while (numero <= 5) 
    {
        resultado1 = numero * 10;
        resultado2 = numero * 100;
        resultado3 = numero * 1000;

        //imprime en pantalla
        cout << numero << "\t" << resultado1 << "\t" << resultado2
        << "\t" << resultado3 << endl;
        
        //incrementa el numero
        numero++;
    }

    cout << endl;

    //termina el programa
    return 0;
}