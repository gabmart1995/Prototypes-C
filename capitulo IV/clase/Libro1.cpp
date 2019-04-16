#include "./../interfaz/Libro1.h"

LibroCalificaciones::LibroCalificaciones(string nombre)
{
    //establece los valores
    aCuenta = 0;
    bCuenta = 0;
    cCuenta = 0;
    dCuenta = 0;
    fCuenta = 0;

    //llama a la funcion
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
        nombreCurso = nombre.substr(0, 25); //seleciona los primeros 25 caracteres

        cout << "El nombre \"" << nombre << "\" excede la longitud máxima de 25 caracteres.\n" 
        << "Se limito nombreCurso a los primeros 25 caracteres.\n" << endl; 
    }
}

string LibroCalificaciones::obtenerNombreCurso()
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje()
{
    cout << "Bienvenido al libro de calificaciones para " << obtenerNombreCurso()
    << "!\n" << endl;
}

void LibroCalificaciones::mostrarReporteCalificaciones()
{
    cout << "\n\nNúmeros de estudiantes que recibieron su calificación en una letra:\n"
    << "\nA: " << aCuenta
    << "\nB: " << bCuenta
    << "\nC: " << cCuenta
    << "\nD: " << dCuenta
    << "\nF: " << fCuenta
    << endl << endl;
}

void LibroCalificaciones::recibirCalificaciones()
{
    //variable
    int calificacion;

    cout << "Escriba las calificaciones por letra." << endl 
    << "Escriba el caracter EOF para terminar la entrada.\n" << endl; 

    while ((calificacion = cin.get()) != EOF)
    {
        //determina la cual calificacion que se introdujo
        switch(calificacion)
        {
            case 'A':
            case 'a':
                aCuenta++;
                break;

            case 'B':
            case 'b':
                bCuenta++;
                break;

            case 'C':
            case 'c':
                cCuenta++;
                break;

            case 'D':
            case 'd':
                dCuenta++;
                break;

            case 'F':
            case 'f':
                fCuenta++;
                break;

            case ' ': //ignosra los espacios en blanco
            case '\n': //ignora los saltos de linea
            case '\t': //ignora los tabuladores
                break;

            default:
                cout << "Se introdujo una letra de calificación incorrecta."
                << " Escribe una nueva calificación." << endl;
                break;
        }
    }
}

