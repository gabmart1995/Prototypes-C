#include "./../interfaz/Calculadora.h"

void Calculadora::setNumbers(int num1, int num2)
{
    numero1 = num1;
    numero2 = num2;
}

void Calculadora::add()
{
    resultado = numero1 + numero2;
}

void Calculadora::substract()
{
    resultado = numero1 - numero2;
}

void Calculadora::multiply()
{
    resultado = numero1 * numero2;
}

void Calculadora::divider()
{
    if (numero2 <= 0)
    {
        cout << "no se puede dividir un numero por 0";
    }

    else 
    {
        resultado = numero1 / numero2;
    }
}

void Calculadora::module()
{
    resultado = numero1 % numero2;
}

int Calculadora::getResultado()
{
    return resultado;
}