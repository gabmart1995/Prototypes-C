    //Funcion principal
//Gabriel Martínez
#include "./clases/LibroCalificaciones6.cpp"

int main() 
{
    //variables
    LibroCalificaciones libro1("CS101 Introduccion a la programación en C++");
    LibroCalificaciones libro2("CS102 Estructuras de datos en C++");

    cout << "libro1 creado para el curso: " << libro1.obtenerNombreCurso()
    << "\nlibro2 creado para el curso: " << libro2.obtenerNombreCurso() << endl;

    return 0;
}