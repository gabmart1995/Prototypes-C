//Codigo cliente
//Gabriel Martinez
#include "./clases/Fecha.cpp"

int main()
{
    int ano, mes, dia;
    
    cout << "\n\tBienvenido a la clase fecha\n" << endl;

    cout << "Ingrese el año: ";
    cin >> ano;

    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Ingrese el dia: ";
    cin >> dia;

    //crea objeto fecha
    Fecha fecha1(ano, mes, dia);
    
    //muestra el mensaje
    fecha1.mostrarFecha();

    return 0;
}