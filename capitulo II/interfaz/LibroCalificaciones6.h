//interfaz de la clase LibroCalificaciones
//Gabriel Martínez
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class LibroCalificaciones 
{
    private:
        string nombreCurso;
        string nombreInstructor;

    public:
        
        LibroCalificaciones(string, string);

        void establecerNombreCurso(string nombre);
        string obtenerNombreCurso();

        void establecerNombreInstructor(string nombre);
        string obtenerNombreInstructor();

        void mostrarMensaje();
};