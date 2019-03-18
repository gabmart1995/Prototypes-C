//Programa que separa 5 digitos
//Gabriel Martinez
#include <iostream>

using namespace std;

int main()
{
    int numero, d1, d2, d3, d4, d5;
    
    cout << "\n\tSeparar Digitos" << endl; 
    cout << "\nEscribe un número de 5 digitos: ";
    cin >> numero;

    if (numero >= 10000) 
    {
        if (numero <= 99999)
        {
            d1 = numero / 10000;
            d2 = (numero % 10000) / 1000;
            d3 = (numero % 10000) % 1000 / 100;
            d4 = ((numero % 10000) % 1000) % 100 / 10;
            d5 = (((numero % 10000) % 1000) % 100) % 10;

            cout << d1 << " " << d2 << " " << d3 << " " << d4 
            << " " << d5 << endl;
        }
    }

    return 0;
}