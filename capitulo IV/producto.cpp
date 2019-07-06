/*
    Programa que lee los productos impares
    Gabriel Martínez
*/

#include <iostream>
using namespace std;

int main() {

    int producto = 1;

    cout << "\n\tProducto de números impares\n";  
    cout << endl;  // imprime una nueva linea

    for (int i = 1; i <= 15; i += 2)
    {    
        producto *= i;

        cout << "el producto del numero " << i << " es: " << producto
        << endl;
    }
    
    cout << endl;
    
    return 0;
}