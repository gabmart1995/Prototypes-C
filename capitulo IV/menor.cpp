// Gabriel Martínez 
// menor de varios números

#include <iostream>
using namespace std;

int main() {

    int limite;
    int numero_menor;
    int numero;

    cout << "\nIngrese la cantidad de números a evaluar (1 al 5): ";
    cin >> limite;
    cout << endl;

    for (int contador = 1; contador <= limite; contador++) {
        cout << "Ingrese un número: ";
        cin >> numero;

        if (contador == 1) {

            numero_menor = numero;
        }

        else  {
            
            if (numero < numero_menor) {

                numero_menor = numero;
            }

            else if (numero >= numero_menor) {
                
                continue;
            }
        }
    }

    cout << "\nEl número menor es: " << numero_menor << endl
    << endl;

    return 0;
}