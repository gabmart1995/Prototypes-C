//Programa que lee la circuferencia, area y diametro de un circulo
//Gabriel Martínez
#include <iostream>

using namespace std;

int main()
{
    //variables
    float radio, area, perimetro;
    float pi = 3.14159;

    cout << "\nIngrese el radio del circulo: ";
    cin >> radio;

    //operación
    area = pi * (radio * radio);
    perimetro = pi * (2 * radio);

    cout << "El área del circulo es: " << area << endl;
    cout << "El perimetro del circulo es: " << perimetro << endl
    << endl;

    return 0;
}