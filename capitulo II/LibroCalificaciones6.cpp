    //Funcion principal
//Gabriel Martínez
#include "./clases/LibroCalificaciones6.cpp"

int main() 
{
    //variables
    LibroCalificaciones libro1("CS101 Introduccion a la programación en C++", "Gabriel Martínez");
    LibroCalificaciones libro2("CS102 Estructuras de datos en C++", "Alfonso Martínez");

    libro1.mostrarMensaje(); 
    libro2.mostrarMensaje();

    cout << endl;

    return 0;
}