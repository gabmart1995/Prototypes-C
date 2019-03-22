//Programa que transforma un binario a decimal
//Gabriel Martínez
#include <iostream>
#include <cmath> //libreria matematica de C++
using namespace std;

int main() 
{
    int exponente = 0; 
    int decimal = 0; 
    int digito;
    int binario;

    cout << "\n\tBienvenido a la clase Binaria\n" << endl;
    cout << "Ingrese el numero binario: ";
    cin >> binario;

    while (binario > 0)
    {
        //obtiene el modulo
        digito = binario % 10;

        if (digito == 1) 
        {
            //se llama a la funcion potencia: pow(base, exponente)    
            decimal = decimal + pow(2, exponente); 
        }

        //incrementa el exponente
        exponente++;

        //separa el numero
        binario /= 10;
    }
        
    cout << "El numero decimal es: " << decimal << endl << endl;
    return 0;
}