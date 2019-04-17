//Crea una tabla de la verdad
//Gabriel Martínez

#include <iostream>
using namespace std;

/*Boolalpha hace que los valores se imprimen como true o false*/

int main()
{
    //tabla AND
    cout << boolalpha << "\nAND logico (&&)"
        << "\nfalse && false: " << (false && false)
        << "\nfalse && true: " << (false && true)
        << "\ntrue && false: " << (true && false)
        << "\ntrue && true: " << (true && true) << "\n\n";

    //tabla OR
    cout << "OR logico (||)"
        << "\nfalse && false: " << (false || false)
        << "\nfalse && true: " << (false || true)
        << "\ntrue && false: " << (true || false)
        << "\n true && true: " << (true || true) << "\n\n";

    //tabla NOT
    cout << "NOT logico (!)"
        << "\n!false: " << (!false)
        << "\n!true: " << (!true) << endl << endl; 

    return 0;
}