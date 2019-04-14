//codigo cliente
#include "./clase/Criptografia.cpp"

int main()
{
    int numero;
    Criptografia cripto1;

    cout << "\n\tBienvenido a la clase Criptografia\n" << endl;

    cout << "Ingrese el codigo de 4 digitos que desee cifrar: ";
    cin >> numero;

    cripto1.establecerDigitos(numero);
    
    return 0;
}