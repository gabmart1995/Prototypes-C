//clases
#include "./clase/Criptografia.cpp"
#include "./clase/Criptografia2.cpp"

int main()
{
    int numero;
    Criptografia cripto1;
    Criptografia2 cripto2;

    cout << "\n\tBienvenido a la clase Criptografia\n" << endl;

    cout << "Ingrese el codigo de 4 digitos que desee cifrar: ";
    cin >> numero;

    cripto1.establecerDigitos(numero);

    cout << "Ingrese el codigo de 4 digitos que desee descifrar: ";
    cin >> numero;

    cripto2.establecerDigitos(numero);

    return 0;
}