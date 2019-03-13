//operacion 1
//Gabriel Martínez

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //variables
    int numero1,
        numero2,
        suma,
        resta,
        multiplicacion,
        division;
    
    cout << "Ingrese 2 números: ";
    cin >> numero1 >> numero2;

    //operaciones
    suma = numero1 + numero2; 
    resta = numero1 - numero2; 
    multiplicacion = numero1 * numero2; 
    division = numero1 / numero2;

    cout << "El resultado de la suma es: " << suma << endl;
    cout << "El resultado de la resta es: " << resta << endl;
    cout << "El resultado de la multiplicacion es: " << multiplicacion << endl;
    cout << "El resultado de la division es: " << division << endl;

    return 0;
}