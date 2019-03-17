//Implementacion LibroCalificaciones
//Gabriel Martínez
#include <iostream>
#include <string>
#include <iomanip> //manipuladores de flujo parametrizados

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
