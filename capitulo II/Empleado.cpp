//Codigo cliente
//Gabriel Martinez
#include "./clases/Empleado.cpp"

int main()
{
    //objetos
    Empleado empleado1(5000, "Gabriel", "Martínez");
    Empleado empleado2(6500, "Alfonso", "Martínez");

    cout << "\n\tBienvenido a la clase empleado\n" << endl;

    cout << empleado1.obtenerNombre() << " " << empleado1.obtenerApellido() << endl << endl;
    cout << "\tSalario mensual: " << "\t" << empleado1.obtenerSueldo() << "$" << endl;
    cout << "\tSalario anual: " << "\t\t" << empleado1.obtenerSalarioAnual() << "$" << endl; 
    cout << "\tSalario aumentado: " << "\t" << empleado1.obtenerAumento() << "$" << endl 
    << endl; 

    cout << empleado2.obtenerNombre() << " " << empleado2.obtenerApellido() << endl << endl;
    cout << "\tSalario mensual: " << "\t" << empleado2.obtenerSueldo() << "$" << endl;
    cout << "\tSalario anual: " << "\t\t" << empleado2.obtenerSalarioAnual() << "$" << endl; 
    cout << "\tSalario aumentado: " << "\t" << empleado2.obtenerAumento() << "$" << endl << endl;

    return 0;
}