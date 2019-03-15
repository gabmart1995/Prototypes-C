//Clase Factura
//Gabriel Martínez
#include "./../interfaz/Factura.h"

Factura::Factura(string nombre, string descrip, int cant, int precio)
{
    //constructor
    establecerNumeroPieza(nombre);
    establecerDescripcion(descrip);
    establecerCantidad(cant);
    establecerMonto(precio);
} 

void Factura::establecerNumeroPieza(string nombre) 
{
    n_pieza = nombre;
}

string Factura::obtenerNumeroPieza() 
{
    return n_pieza;
}

void Factura::establecerDescripcion(string descrip) 
{
    descripcion = descrip;
} 

string Factura::obtenerDescripcion() 
{
    return descripcion;
}

void Factura::establecerCantidad(int cant)
{
    if (cant < 0) 
    {
        //establece la cantidad en 0
        cantidad = 0;

        cout << "\nLa cantidad que ingreso no es valido.\nLa cantidad se establecerá en 0" 
        << endl;
    }

    else
    {
        cantidad = cant;
    }
}

int Factura::obtenerCantidad() 
{
    return cantidad;
}

void Factura::establecerMonto(int precio) 
{
    if (precio < 0) 
    {
        //establece el monto en 0
        monto = 0;

        cout << "\nEl monto que ingreso no es valido.\nEl monto se establecerá en 0" 
        << endl;
    }

    else
    {
        monto = precio;
    }
}

int Factura::obtenerMonto() 
{
    return monto;
}

int Factura::obtenerMontoFactura() 
{
    //devuelve la multiplicacion entre el monto y la cantidad
    return obtenerMonto() * obtenerCantidad();
}