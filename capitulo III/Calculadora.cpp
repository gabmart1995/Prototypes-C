//Codigo fuente
#include "./clase/Calculadora.cpp"

int main()
{
    //variables
    int opcion;
    int num1, num2;
    Calculadora calculadora;  //objeto de clase

    cout << "\n\tBienvenido a la clase calculadora\n" << endl;
 
    //corre el programa
    Inicio:

    cout << "Ingrese 2 números separados por un espacio: ";
    cin >> num1 >> num2;

    //establece los valores
    calculadora.establecerNumeros(num1, num2);

    //muestra el mensaje de bienvenida
    calculadora.mostrarMenu();

    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
        case 1: //suma
            calculadora.sumar();

            cout << "El resultado de la suma es: " << 
            calculadora.obtenerResultado()  << endl << endl;

            system("sleep 3s");
            system("clear");

            goto Inicio;

        case 2: //resta               
            calculadora.restar();

            cout << "El resultado de la resta es: " << 
            calculadora.obtenerResultado()  << endl << endl;

            system("sleep 3s");
            system("clear");
            
            goto Inicio;

        case 3:    
            calculadora.multiplicar();

            cout << "El resultado de la multiplicación es: " << 
            calculadora.obtenerResultado()  << endl << endl;

            system("sleep 3s");
            system("clear");
            
            goto Inicio;

        case 4:
            calculadora.dividir();

            cout << "El resultado de la división es: " << 
            calculadora.obtenerResultado()  << endl << endl;

            system("sleep 3s");
            system("clear");

            goto Inicio;

         case 5:
            calculadora.modulo();

            cout << "El resultado del modulo es: " << 
            calculadora.obtenerResultado() << endl << endl;

            system("sleep 3s");
            system("clear");

            goto Inicio;

        case 6:
            cout << "\n";
            //cierra el programa
            return 0;

        default:
            cout << "La opcion que ha seleccionado es incorrecta\n" << endl;
            goto Inicio;
    }
}