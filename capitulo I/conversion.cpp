//Programa que convierte un caracter en un número
//Gabriel Martinez
#include <iostream>
using namespace std;

int main()
{
    char caracter;

    cout << "\n\tPrograma de conversion\n" << endl;
    cout << "Ingrese un solo caracter: ";
    cin >> caracter;

    cout << "El número del caracter ASCII es: " << static_cast < int > (caracter) 
    << endl << endl;
    
    return 0;
}