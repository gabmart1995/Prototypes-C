#include "./../interfaz/Calculadora.h"

void Calculadora::establecerNumeros(int num1, int num2)
{
    numero1 = num1;
    numero2 = num2;
}

void Calculadora::sumar()
{
    resultado = numero1 + numero2;
}

void Calculadora::restar()
{
    resultado = numero1 - numero2;
}

void Calculadora::multiplicar()
{
    resultado = numero1 * numero2;
}

void Calculadora::dividir()
{
    resultado = numero1 / numero2;
}

void Calculadora::modulo()
{
    resultado = numero1 % numero2;
}

int Calculadora::obtenerResultado()
{
    return resultado;
}

void Calculadora::mostrarMenu()
{
    //imprime mensaje
    cout << "\n\tMenu de operaciones:\n" << endl;
    cout << "1.- Suma\n";
    cout << "2.- Resta\n";
    cout << "3.- Multiplicacion\n";
    cout << "4.- Division\n";
    cout << "5.- Modulo\n";
    cout << "6.- Salir\n" << endl; 
}