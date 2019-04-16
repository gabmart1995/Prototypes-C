//Repeticion controlada por un do-while
//Gabriel Martínez
#include <iostream>
using namespace std;

int main()
{
    //establecemos un contador
    int contador = 1;

    do 
    {
        cout << contador <<  " "; //muestra el contador
        contador++;
    } 
    
    //ejecuta el ciclo do
    while (contador <= 10);
    
    cout << endl;
    return 0;
}