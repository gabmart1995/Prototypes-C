//Codigo cliente clase factura
//Gabriel Martínez
#include "./clases/Factura.cpp"

int main()
{   
    //variables
    string num_pieza, descripcion;
    int cantidad, monto;
    
    //mensaje en pantalla
    cout << "\t\nBienvenido a la clase factura\n" << endl;
    
    cout << "Ingrese el numero del articulo: ";
    getline(cin, num_pieza);

    cout << "Ingrese una descripción del articulo: ";
    getline(cin, descripcion);

    cout << "Ingrese la cantidad del articulo: ";
    cin >> cantidad;

    cout << "Ingrese el monto del articulo: ";
    cin >> monto;

    //objeto
    Factura factura1(num_pieza, descripcion, cantidad, monto);

    //imprime factura
    cout << "\nEl total de la factura es: " << factura1.obtenerMontoFactura() << "$\n"
    << endl;

    return 0;
}