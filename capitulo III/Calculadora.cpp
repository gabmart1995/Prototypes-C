//Codigo fuente
#include "./clase/Calculadora.cpp"

int main()
{
    //variables
    int opcion;
    int num1, num2;

    cout << "\n\tBienvenido a la clase calculadora\n" << endl;
 
     //crea el objeto
    Calculadora calculadora;

    //corre el programa
    Inicio:

    cout << "Ingrese 2 números: ";
    cin >> num1 >> num2;

    //establece los valores
    calculadora.setNumbers(num1, num2);

    cout << "\nMenu de operaciones\n" << endl;
    cout << "1.- Suma\n";
    cout << "2.- Resta\n";
    cout << "3.- Multiplicacion\n";
    cout << "4.- Division\n";
    cout << "5.- Modulo\n";
    cout << "6.- Salir\n" << endl; 

    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
        case 1: //suma
            calculadora.add();

            cout << "El resultado de la suma es: " << 
            calculadora.getResultado()  << endl << endl;

            system("sleep 3s");
            system("clear");

            goto Inicio;

        case 2: //resta               
            calculadora.substract();

            cout << "El resultado de la resta es: " << 
            calculadora.getResultado()  << endl << endl;

            system("sleep 3s");
            system("clear");
            
            goto Inicio;

        case 3:    
            calculadora.multiply();

            cout << "El resultado de la multiplicación es: " << 
            calculadora.getResultado()  << endl << endl;

            system("sleep 3s");
            system("clear");
            
            goto Inicio;

        case 4:
            calculadora.divider();

            cout << "El resultado de la división es: " << 
            calculadora.getResultado()  << endl << endl;

            system("sleep 3s");
            system("clear");

            goto Inicio;

         case 5:
            calculadora.module();

            cout << "El resultado del modulo es: " << 
            calculadora.getResultado() << endl << endl;

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