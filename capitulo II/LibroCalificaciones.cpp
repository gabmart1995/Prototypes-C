//Clase LibroCalificaciones
//Gabriel Martínez
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//clase
class LibroCalificaciones 
{
    //atributos públicos
    public:

    void mostrarMensaje() 
    {
        cout << "Bienvenido al libro de calificaciones!" << endl;
    }
}; //recuerda cerrar con punto y coma

//funcion principal
int main()
{
    LibroCalificaciones libro1;
    libro1.mostrarMensaje();

    return 0;
}