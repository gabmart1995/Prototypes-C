//Clases LibroCalificaciones 
//Gabriel Martínez
#include "./../interfaz/LibroCalificaciones6.h"

LibroCalificaciones::LibroCalificaciones(string nombre) 
{
    establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre) 
{
    nombreCurso = nombre;
}

string LibroCalificaciones::obtenerNombreCurso() 
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() 
{
    cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
    << "!" << endl;
}