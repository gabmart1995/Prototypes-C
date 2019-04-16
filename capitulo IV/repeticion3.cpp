//Repeticion de suma de dos digitos
//Gabriel Martínez
#include <iostream>
using namespace std;

int main()
{
    int total = 0;

    //obtiene el total de los pares del 2 al 20
    for (int numero = 2; numero <= 20; numero += 2) 
    {
        total += numero;
    }

    cout << "La suma total del numero es: " << total << endl;
    return 0; 
}