//Clase LibroCalificaciones2 con setter y getter
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
    private:
    string nombreCurso;

    public:
    void  establecerNombreCurso(string nombre) 
    {
        nombreCurso = nombre;
    }

    string obtenerNombreCurso() 
    {
        return nombreCurso;
    }

    void mostrarMensaje() 
    {
        cout << "Bienvenido al libro de calificaciones para\n" 
        << obtenerNombreCurso() << "!" << endl;
    }
};

int main() 
{   
    //varibles
    string nombre;
    LibroCalificaciones libro;

    //mensaje
    cout << "El nombre inicial del curso es: " << libro.obtenerNombreCurso() 
    << endl << endl;

    cout << "Ingrese el nombre del curso:" << endl;
    getline(cin, nombre);

    libro.establecerNombreCurso(nombre);
    cout << endl;

    libro.mostrarMensaje();
    return 0;
}
