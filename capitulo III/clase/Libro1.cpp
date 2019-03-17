//Implementacion de la clase
//Gabriel Martinez
#include "./../interfaz/Libro1.h"

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
    cout << "\nBienvenido al libro de calificaciones para \n" << obtenerNombreCurso() 
    << "!\n" << endl;
}

void LibroCalificaciones::determinarPromedioClase()
{
    //variables locales
    int total = 0; 
    int contadorCalif = 1;
    int calificacion;
    int promedio;

    //ciclo while
    while (contadorCalif <= 10)
    {
        cout << "Ingrese una calificación: ";
        cin >> calificacion;

        total = total + calificacion;

        //aumenta el ciclo
        contadorCalif++;
    }

    //calcula el promedio
    promedio = total / 10;

    //muestra el total y el promedio de las calificaciones
    cout << "\nEl total de las 10 calificaciones es: " << total << endl;
    cout << "El promedio de la clase es: " << promedio << endl;
}