#include "./../interfaz/Euler.h"

void Euler::establecerNumeros(int num1, int num2)
{
    if ((num1 >= 0) && (num2 >= 0))
    {
        num_factorial = 1;
        num_euler = 1;
        validacion = true;
    }

    else 
    {
        validacion = false;
    }
}

void Euler::calcularEulerExponencial(int numero)
{
    int contador = 1;
    
    //reiniciamos el numero de euler
    num_euler = 1;
    num_factorial = 1;

    while (contador <= numero)
    {
        num_factorial *= contador;
        num_euler += pow((1 / num_factorial), contador);
        contador++;
    }
}

void Euler::calcularEuler(int numero)
{
    int contador = 1;

    while (contador <= numero)
    {
        num_factorial *= contador;
        num_euler += (1 / num_factorial);
        contador++;
    }
}

void Euler::mostrarMensaje() 
{
    cout << "La constante de euler es: " << obtenerEuler() << endl; 
}

void Euler::mostrarMensaje2()
{
     cout << "La constante exponenciada de euler es: " << obtenerEuler() 
     << endl << endl; 
}

double Euler::obtenerEuler() 
{
    return num_euler;
}

bool Euler::obtenerValidacion()
{
    return validacion;
}