//Codigo cliente
//Gabriel Martínez
#include "./clase/Libro1.cpp"

int main() 
{
    //crea el objeto
    LibroCalificaciones libro1("CS101 Programación en C++");

    libro1.mostrarMensaje();
    libro1.determinarPromedioClase();

    return 0;
}