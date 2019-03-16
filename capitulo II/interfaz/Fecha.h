//Interfaz de fecha
//Gabriel Martínez
#include <iostream>

using namespace std;

class Fecha 
{
    private:
        int ano, mes, dia;

    public:
        Fecha(int, int, int);
        
        void establecerAno(int);
        int obtenerAno();

        void establecerMes(int);
        int obtenerMes();

        void establecerDia(int);
        int obtenerDia();

        void mostrarFecha();
};