//Clase cuenta
//Gabriel Martínez
#include "./../interfaz/Cuenta.h"

Cuenta::Cuenta(int monto) 
{
    if (monto >= 0)
    {
        //establece el monto
        saldo = monto;
    }

    else 
    {
        cout << "El saldo inicial es invalido" << endl;
    }
}

void Cuenta::cargar(int monto)
{
    if (monto <= saldo)
    {
        //operacion
        saldo = saldo - monto;
        cout << "Su saldo actual es: " << obtenerSaldo() << endl;
    }

    else 
    {
        cout << "El monto a cargar excede al saldo de la cuenta" << endl;
    }
}

void Cuenta::credit(int monto)
{
     if (monto > 0)
    {
        //operacion
        saldo = saldo + monto;
        cout << "Su saldo actual es: " << obtenerSaldo() << endl;
    }

    else 
    {
        cout << "El saldo es insuficiente para realizar la operación" << endl;
    }
}

int Cuenta::obtenerSaldo() 
{
    return saldo;
}