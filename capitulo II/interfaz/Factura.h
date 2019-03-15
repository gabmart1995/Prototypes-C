//Implementación de la clase facura
//Gabriel Martínez
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

class Factura
{
    private:
        string n_pieza;
        string descripcion;
        int cantidad;
        int monto;

    public:
        Factura(string, string, int, int); //Constructor

        void establecerNumeroPieza(string);
        string obtenerNumeroPieza();

        void establecerDescripcion(string);
        string obtenerDescripcion();

        void establecerCantidad(int);
        int obtenerCantidad();

        void establecerMonto(int);
        int obtenerMonto();

        //funcion para obtener el monto total de la factura
        int obtenerMontoFactura();
};