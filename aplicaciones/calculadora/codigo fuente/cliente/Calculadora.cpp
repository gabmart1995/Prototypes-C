//Codigo fuente
#include "./../clase/Calculadora.cpp"

int main()
{
    //variables
    int opcion;
    int num1, num2;
    Calculadora calculadora;  //objeto de clase

    cout << "\n\t\tCalculadora Personal\n" << endl;
 
    //corre el programa
    Inicio:

    cout << "Ingrese 2 números separados por un espacio: ";
    cin >> num1 >> num2;

    //establece los valores
    calculadora.establecerNumeros(num1, num2);

    //muestra el mensaje de bienvenida
    calculadora.mostrarMenu();

    cout << "Ingrese una opcion númerica: ";
    cin >> opcion;

    switch (opcion)
    {
        case 1: //suma
            calculadora.sumar();

            cout << "\n|----------------------------------------------|" << endl;
            cout << "\n\tEl resultado de la suma es: " << 
            calculadora.obtenerResultado()  << endl << endl;
            cout << "|----------------------------------------------|\n" << endl;

            goto Inicio;

        case 2: //resta               
            calculadora.restar();

            cout << "\n|----------------------------------------------|" << endl;
            cout << "\n\tEl resultado de la resta es: " << 
            calculadora.obtenerResultado()  << endl << endl;
            cout << "|----------------------------------------------|\n" << endl;

            goto Inicio;

        case 3:    
            calculadora.multiplicar();

            cout << "\n|------------------------------------------------------|" << endl;
            cout << "\n\tEl resultado de la multiplicación es: " << 
            calculadora.obtenerResultado()  << endl << endl;
            cout << "|--------------------------------------------------------|\n" << endl;
            
            goto Inicio;

        case 4:
            //valida la entrada
            if (num2 <= 0) 
            {
                cout << "\nNo se puede efectuar la división\n" << endl;
            }

            else 
            {
                calculadora.dividir();

                cout << "\n|----------------------------------------------|" << endl;
                cout << "\n\tEl resultado de la división: " << calculadora.obtenerResultado()  
                << endl << endl;
                cout << "|----------------------------------------------|\n" << endl;
            }
            
            goto Inicio;

         case 5:
           if (num2 <= 0)
           {
                cout << "\nNo se puede efectuar la división\n" << endl; 
           }
           
           else 
           {
                calculadora.modulo();

                cout << "\n|----------------------------------------------|" << endl;
                cout << "\n\tEl resultado del modulo es: " << 
                calculadora.obtenerResultado()  << endl << endl;
                cout << "|----------------------------------------------|\n" << endl;
           }

            goto Inicio;

        case 6:
            cout << "\n";
            return 0;

        default:
            cout << "La opcion que ha seleccionado es incorrecta\n" << endl;
            goto Inicio;
    }
}