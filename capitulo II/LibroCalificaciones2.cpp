//Clase LibroCalificaciones2 con parametros
//Gabriel Martínez
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;


class LibroCalificaciones 
{
    public:

    void mostrarMensaje(string nombreCurso) 
    {
        cout << "Bienvenido al libro de calificaciones para\n" << nombreCurso <<
        "!" << endl;
    }
};

int main() 
{
    //variables
    string nombre;
    LibroCalificaciones libro;

    cout << "Ingrese el nombre del curso: " << endl;
    getline(cin, nombre); //lee el nombre con espacios en blanco
    cout << endl;

    libro.mostrarMensaje(nombre);
    return 0;
}