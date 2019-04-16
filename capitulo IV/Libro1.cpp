#include "./clase/Libro1.cpp"

int main()
{
    //variable
    string nombre;

    cout << "\n\tBienvenido a la clase LibroCalificaciones\n" << endl;
    cout << "Ingrese el nombre del curso: ";
    getline(cin, nombre);

    LibroCalificaciones libro(nombre);

    //muestra el mensaje de bienvenida
    libro.mostrarMensaje();    

    //asigna la calificaciones y luego las muestra
    libro.recibirCalificaciones();
    libro.mostrarReporteCalificaciones();

    return 0;
}