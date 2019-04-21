#include "./clase/Factorial.cpp"
#include "./clase/Euler.cpp"

int main()
{
    int num1, num2, num3;

    //objetos de clase
    Factorial factorial;
    Euler euler;

    cout << "\n\tBienvendo a la clase Euler Factorial\n" << endl;
    cout << "Ingrese el número que desee factorizar: ";
    cin >> num1;
    
    factorial.establecerNumeros(num1);

    cout << "Ingrese la precisión del número de euler: ";
    cin >> num2;

    cout << "Ingrese la precisión del número de euler exponenciado: ";
    cin >> num3;

    euler.establecerNumeros(num2, num3);

    if ((factorial.obtenerValidacion() == true) && (euler.obtenerValidacion() == true))
    {
        factorial.calcularFactorial(num1);
        factorial.mostrarMensaje();

        euler.calcularEuler(num2);
        euler.mostrarMensaje();

        euler.calcularEulerExponencial(num3);
        euler.mostrarMensaje2();
    }

    else 
    {
        cout << "Ingrese un número entero mayor a 0" << endl << endl;     
    }

    return 0;
}