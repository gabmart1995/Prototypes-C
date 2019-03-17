//Continuacion de la clase LibroCalificaciones
//Gabriel Martínez  
#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones 
{
    private:
        
        string nombreCurso;

    public:
        
        LibroCalificaciones(string);

        void establecerNombreCurso(string);
        string obtenerNombreCurso();

        void mostrarMensaje();
        void determinarPromedioClase();
};