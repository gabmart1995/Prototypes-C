//main
//Gabriel Martinez
#include "./clases/Libro7.cpp"

int main()
{
    //variables
    LibroCalificaciones libro1("CS101 Introduccion a la programacion en C++");
    LibroCalificaciones libro2("CS102 C++:Estruc de datos");

    cout << "El nombre inicial del libro de calificaciones 1 es: "  << libro1.obtenerNombreCurso() 
    << "\nel nombre inicial para el curso de calificaciones 2 es: " << libro2.obtenerNombreCurso() << endl;

    //modifica el nombreCurso
    libro1.establecerNombreCurso("CS101 Programacion en C++");

    //mensaje en pantalla
    cout << "\nEl nombre del curso de LibroCalificaciones1 es: " << libro1.obtenerNombreCurso()
    << "\nEl nombre del curso de LibroCalificaciones2 es: " << libro2.obtenerNombreCurso()
    << endl;

    return 0;
}