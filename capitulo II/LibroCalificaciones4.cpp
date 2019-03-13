//Clase LibroCalificaciones inicializado con un constructor
//Gabriel Martínez
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class LibroCalificaciones 
{
    //variables
    private:
    string nombreCurso;

    public:
    //Constructor
    LibroCalificaciones(string nombre)
    {
        establecerNombreCurso(nombre);
    }

    void establecerNombreCurso(string nombre) 
    {
        nombreCurso = nombre;
    }

    string obtenerNombreCurso() 
    {
        return nombreCurso;
    }

    void mostrarMensaje() 
    {
        cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() 
        << "!" << endl;
    }
};

int main()
{
    //variables
    LibroCalificaciones libro1("CS101 Introducción a la programación en C++");
    LibroCalificaciones libro2("CS102 Estructuras de datos en C++");

    cout << "Libro1 se creo para el curso: " << libro1.obtenerNombreCurso() 
    << "\nLibro2 se creo para el curso: " << libro2.obtenerNombreCurso() << endl;

    return 0;
}