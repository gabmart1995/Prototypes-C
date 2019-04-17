//instruccion continue para terminar una interacion for
#include <iostream>
using namespace std;

int main()
{
    for (int cuenta = 1; cuenta <= 10; cuenta++)
    {
        if (cuenta == 5)
        {
            continue; //omite el codigo restante en el ciclo
        }

        cout << cuenta << " ";
    }

    cout << "\nSe uso continue para no imprimir el 5" << endl;
    return 0;
}