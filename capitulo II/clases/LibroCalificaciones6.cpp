//Clases LibroCalificaciones 
//Gabriel Martínez
#include "./../interfaz/LibroCalificaciones6.h"

LibroCalificaciones::LibroCalificaciones(string nombre_curso, string nombre_instructor) 
{
    establecerNombreCurso(nombre_curso);
    establecerNombreInstructor(nombre_instructor);
}

void LibroCalificaciones::establecerNombreCurso(string nombre_curso) 
{
    nombreCurso = nombre_curso;
}

string LibroCalificaciones::obtenerNombreCurso() 
{
    return nombreCurso;
}

void LibroCalificaciones::establecerNombreInstructor(string nombre_instructor)
{
    nombreInstructor = nombre_instructor;
}

string LibroCalificaciones::obtenerNombreInstructor() 
{
    return nombreInstructor;
}

void LibroCalificaciones::mostrarMensaje() 
{
    cout << "\nBienvenido al libro de calificaciones para:\n" << obtenerNombreCurso()
    << "!" << endl;

    cout << "Este curso es presentado por: " << obtenerNombreInstructor() << endl;
}