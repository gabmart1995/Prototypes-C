//producto de 2 numeros
//Gabriel Martinez

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
    int numero1,
        numero2, 
        numero3,
        producto;
    
    //mensaje
    cout << "Ingrese tres números: ";
    cin >> numero1 >> numero2 >> numero3;

    //operacion
    producto = numero1 * numero2 * numero3;

    cout << "El producto es: " << producto << endl;

    return 0;
}