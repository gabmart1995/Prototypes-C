#include "./../interfaz/Factorial.h"

void Factorial::establecerNumeros(int num1) {

    num_factorial = 1;

    if (num1 >= 0)
    {
        calcularFactorial(num1);
    }

    else 
    {
        cout << "Ingrese un número mayor o igual a 0\n" << endl;
        return;
    }
}

void Factorial::calcularFactorial(int numero) 
{
    int contador = 1;

    //valida la entrada
    if (numero > 1)
    {
        while (contador <= numero) 
        {
            num_factorial *= contador;
            contador++;
        }
    }

    else 
    {
        num_factorial = 1;
    }
}

int Factorial::obtenerFactorial()
{
    return num_factorial;
}

void Factorial::mostrarMensaje()
{
    cout << "El resultado del numero factorial es: " << obtenerFactorial() 
    << endl << endl;
}