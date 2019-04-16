//Repeticion controlada por un bucle for
//Gabriel Martínez
#include <iostream>
using namespace std;

int main()
{
    for (int contador = 1; contador <= 10; contador++)
    {
        cout << contador << " ";
    }

    cout << endl;

    for (int i = 7; i <= 77; i += 7) 
    {
         cout << i << " "; //serie de 7 en 7
    }

    cout << endl;

    for (int j = 20; j >= 2; j -= 2) 
    {
        cout << j << " "; //serie de 2 en 2
    }

    cout << endl;
    return 0;
}