//Clase emplaeado
//Gabriel Martínez
#include "./../interfaz/Empleado.h"

Empleado::Empleado(int salario, string n_empleado, string a_empleado) 
{
    establecerSueldo(salario);
    establecerNombre(n_empleado);
    establecerApellido(a_empleado);
}

void Empleado::establecerNombre(string n_empleado)
{
    nombre = n_empleado;
}

string Empleado::obtenerNombre() 
{
    return nombre;
}

void Empleado::establecerApellido(string a_empleado) 
{
    apellido = a_empleado;
}

string Empleado::obtenerApellido() 
{
    return apellido;
}

void Empleado::establecerSueldo(int salario) 
{
   if (salario >= 0) 
   {
       sueldo = salario;
   }

   else
   {
       cout << "\nEl salario no puede ingresar saldo negativo. \
       \nEl salario se establecerá en 0" << endl;

       sueldo = 0;
   }
   
}

int Empleado::obtenerSueldo() 
{
    return sueldo;
}

int Empleado::obtenerSalarioAnual() 
{
    return obtenerSueldo() * 12;
}

int Empleado::obtenerAumento() 
{
    return obtenerSueldo() * 0.10;
}