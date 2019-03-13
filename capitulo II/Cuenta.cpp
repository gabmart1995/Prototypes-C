//Codigo cliente
//Gabriel Martínez
#include "./clases/Cuenta.cpp"

//main
int main() 
{
    //variables
    int saldoCuenta, 
        saldoCuenta2;
    
    int opcion, opcion2;
    int monto;

    //imprime mensaje en pantalla
    cout << "\n\tBienvenido al banco\n" << endl;

    //saldo
    cout << "Ingrese el primer saldo: ";
    cin >> saldoCuenta;
    cout << "Ingrese el segundo saldo: ";
    cin >> saldoCuenta2;

    //Objetos
    Cuenta cuenta1(saldoCuenta);
    Cuenta cuenta2(saldoCuenta2);

    //goto
    Inicio:

    //opciones
    cout << "\nOpciones de cuenta:" << endl;
    cout << "1.- Credit" << endl;
    cout << "2.- Cargar" << endl;
    cout << "3.- Salir" << endl;

    cout << "Ingrese una opción: ";
    cin >> opcion;

    switch (opcion)
    {
        case 1:
            cout << "\n¿Cual de las cuentas desea aplicar la operacion?" << endl;
            cout << "1.- " << cuenta1.obtenerSaldo() << endl;
            cout << "2.- " << cuenta2.obtenerSaldo() << endl;
            cout << "3.- Salir" << endl;
            cout << "Ingrese una opcion: ";
            cin >> opcion2;

            if (opcion2 == 1) 
            {
                cout << "Ingrese el monto a depositar: ";
                cin >> monto;

                //llama a la funcion
                cuenta1.credit(monto);
            }

            else if (opcion2 == 2) 
            {
                cout << "Ingrese el monto a depositar: ";
                cin >> monto;

                //llama a la funcion
                cuenta2.credit(monto);
            }

            else if (opcion2 == 3) 
            {
                goto Inicio;
            }

            else 
            {
                cout << "Ingrese la opcion correcta";
            }

            goto Inicio;

        case 2:
            cout << "\n¿Cual de las cuentas desea aplicar la operacion?" << endl;
            cout << "1.- " << cuenta1.obtenerSaldo() << endl;
            cout << "2.- " << cuenta2.obtenerSaldo() << endl;
            cout << "3.- Salir" << endl;
            cout << "Ingrese una opcion: ";
            cin >> opcion2;

              if (opcion2 == 1) 
            {
                cout << "Ingrese el monto a retirar: ";
                cin >> monto;

                //llama a la funcion
                cuenta1.cargar(monto);
            }

            else if (opcion2 == 2)
            {
                cout << "Ingrese el monto a retirar: ";
                cin >> monto;

                //llama a la funcion
                cuenta2.cargar(monto);
            }

             else if (opcion2 == 3) 
            {
                goto Inicio;
            }

            else 
            {
                cout << "Ingrese la opcion correcta" << endl;
            }

            goto Inicio;

        case 3:
            //imprime mensaje y cierra programa
            cout << "Gracias por usar los servicios que tenga buen día" << endl;
            return 0;

        default:
            cout << "Ingrese la opcion correcta";
            goto Inicio;
    }
}