//programa de suma que muestra la suma de 2 elementos
//Gabriel Martínez

#include <iostream>

int main() 
{
    //variables
    int numero1,
        numero2,
        suma; //resultado

    std::cout << "Escriba el primer número: "; //pide los datos en pantalla
    std::cin >> numero1;

    std::cout << "Escribe el siguiente número: ";
    std::cin >> numero2;

    //operacion
    suma = numero1 + numero2;

    std::cout << "El resultado de la suma es: " << suma << std::endl;
    return 0; 
}