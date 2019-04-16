//LibroCalificaciones 
//cuenta calificaciones A B C D y F
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

class LibroCalificaciones
{
    public:
        LibroCalificaciones(string); //constructor
        void establecerNombreCurso(string);
        string obtenerNombreCurso();
        void mostrarMensaje();
        void recibirCalificaciones();
        void mostrarReporteCalificaciones();

    private:
        string nombreCurso;
        int aCuenta;
        int bCuenta;
        int cCuenta;
        int dCuenta;
        int fCuenta;
};

