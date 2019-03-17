//Clase LibroCalificaciones
//Gabriel Martínez
#include "./../interfaz/Libro2.h"

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

    else
    {
        //selecciona los primeros 25 caracteres
        nombreCurso = nombre.substr(0, 25);

        cout << "El nombre \"" << nombre << "\" excede la longitud \
        maxima (25).\n" << "Se limitó nombreCurso a los primeros 25 \
        caracteres\n" << endl;
    }
}

string LibroCalificaciones::obtenerNombreCurso()
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje()
{
    cout << "\nBienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
    << "!\n" << endl;
}

void LibroCalificaciones::determinarPromedioClase() 
{
    int total = 0;
    int contadorCalif = 0;
    int calificacion;
    double promedio; //numero con punto decimal para el promedio

    //fase de procesamiento
    cout << "Escriba la calificacion o -1 para salir: ";
    cin >> calificacion;

    while (calificacion != -1)
    {
        total = total + calificacion;
        contadorCalif++; //aumenta en +1 el contador

        cout << "Escriba la calificación o -1 para salir: ";
        cin >> calificacion;
    }

    if (contadorCalif != 0)
    {
        //calcula el promedio y transforma la variable
        promedio = static_cast < double > (total) / contadorCalif;

        cout << "\nEl valor total de las " << contadorCalif << 
        " calificaciones introducidas es: " << total << endl;

        cout << "El promedio de la clase es: " << setprecision(2) << fixed << promedio
        << endl;
    }

    else
    {
        cout << "No se introdujeron calificaciones." << endl;
    }
}