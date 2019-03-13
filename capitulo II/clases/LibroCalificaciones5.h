//definicion de un archivo separado de main
//Gabriel Martinez
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//claseLibroCalificaciones
class LibroCalificaciones 
{
    private:
    string nombreCurso;

    public:
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