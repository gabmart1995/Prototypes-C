#include "./../interfaz/Factorial.h"

void Factorial::establecerNumeros(int num1) {

    if (num1 >= 0)
    {
        num_factorial = 1;
        validacion = true;
    }

    else 
    {
        validacion = false;
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

void Factorial::mostrarMensaje()
{
    cout << "\nEl resultado del numero factorial es: " << obtenerFactorial() 
    << endl;
}

bool Factorial::obtenerValidacion()
{
    return validacion;
}

int Factorial::obtenerFactorial()
{
    return num_factorial;
}

