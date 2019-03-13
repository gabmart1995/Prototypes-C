//Clase LibroCalificaciones
//Gabriel Martinez
#include "./../interfaz/Libro7.h"

LibroCalificaciones::LibroCalificaciones(string nombre) 
{
    establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre) 
{
    if (nombre.length() <= 25) 
    {
        nombreCurso = nombre;
    }

    if (nombre.length() > 25)
    {
        //establecer nombre curso los primeros 25 caracteres
        nombreCurso = nombre.substr(0, 25);

        //mensaje
        cout << "El nombre: \"" << nombre << "\" excede la logitud máxima (25).\n"
        << "Se limito nombreCurso a los primeros 25 caracteres.\n" << endl; 
    }
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