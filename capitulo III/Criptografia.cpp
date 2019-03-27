//codigo cliente
#include "./clase/Criptografia.cpp"

int main()
{
    int numero;

    cout << "\n\tBienvenido a la clase Criptografia\n" << endl;

    cout << "Ingrese el numero que desee cifrar: ";
    cin >> numero;

    Criptografia cripto1;
    cripto1.establecerCifrado(numero);
    cripto1.mostrarCodigoCifrado();
    
    return 0;
}