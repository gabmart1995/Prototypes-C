//archivo de cabecera
#include "./clases/LibroCalificaciones5.h"

//funcion principal
int main() 
{
    LibroCalificaciones libro1("CS101 Introduccion a la programación en C++");
    LibroCalificaciones libro2("CS102 Esturcturas de datos en C++");

    cout << "libro1 se creo para el curso: " << libro1.obtenerNombreCurso() 
    << "\nlibro2 se creo para el curso: " << libro2.obtenerNombreCurso() << endl;

    return 0;
}