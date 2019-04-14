//clase cifrado
#include "./../interfaz/Criptografia.h"

void Criptografia::establecerCifrado(int entero)
{
    while (entero > 0)
    {
       //asigna los digitos 
       if (entero >= 1000 && entero <= 9999)
       {
           digito1 = entero / 1000;
       }

       else if (entero >= 100 && entero <= 999)
       {
           digito2 = (entero % 1000) / 100;
       }

       else if (entero >= 10 && entero <= 99) 
       {
           digito3 = ((entero % 1000) % 100) / 10;
       }

       else 
       {
           digito4 = ((entero % 1000) % 100) % 10;
       }

        //separa el entero
        entero /= 10;

        
    } 
}

void Criptografia::mostrarCodigoCifrado()
{
    cout << "El numero cifrado es: " << digito1 << " " << digito2 
    << " " << digito3 << " " << digito4 << endl << endl;
}