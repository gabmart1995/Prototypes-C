#include "./clase/Factorial.cpp"

int main()
{
    int num1, num2;
    Factorial factorial;

    cout << "\n\tBienvendo a la clase factorial\n" << endl;
    cout << "Ingrese el número a factorizar: ";
    cin >> num1;

    factorial.establecerNumeros(num1);
    factorial.mostrarMensaje();
    return 0;
}