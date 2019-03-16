//Clase Fecha
//Gabriel Martínez
#include "./../interfaz/Fecha.h"

Fecha::Fecha(int a, int m, int d)
{
    establecerAno(a);
    establecerMes(m);
    establecerDia(d);
}

void Fecha::establecerAno(int a) 
{
    ano = a;
}

int Fecha::obtenerAno() 
{
    return ano;
}

void Fecha::establecerMes(int m)
{
    if (m <= 12 && m >= 1)
    {
        mes = m;
    }

    else 
    {
        //Establece al mes 1
        mes = 1;
        cout << "\nEl mes no concuerda.\nSe establece el mes a enero" << endl;  
    }
}

int Fecha::obtenerMes()
{
    return mes;
}

void Fecha::establecerDia(int d) 
{
    if (d <= 31 && d >= 1) 
    {
        dia = d;
    }

    else
    {
        //Establece al dia 1
        dia = 1; 
        cout << "\nEl día no concuerda.\nSe establece el primer día del mes" << endl;
    }
    
}

int Fecha::obtenerDia() 
{
    return dia;
}

void Fecha::mostrarFecha()
{
    cout << "\nLa fecha ingresada es: ";
    
    cout << obtenerMes() << "/" << obtenerDia() << "/" 
    << obtenerAno() << endl << endl;
} 