//LibroCalificaciones.h
//Gabriel Martínez
#include <iostream>
#include <string>

using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::endl;

class LibroCalificaciones 
{
    private:
       string nombreCurso;

    public:
        LibroCalificaciones(string nombre);
        void establecerNombreCurso(string nombre);
        string obtenerNombreCurso();
        void mostrarMensaje();
};