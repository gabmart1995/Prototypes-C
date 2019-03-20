//Clase Cuadrado 
//Gabriel Martínez
#include "./../interfaz/Cuadrado.h"

void Cuadrado::mostrarCuadrado() {
    
     //variables
    int contador = 1;
    int ladoCuadrado;

    cout << "\n\tBienvenido a la clase cuadrado\n" << endl;
    
    Inicio:
    cout << "Ingrese el tamaño de lado del cuadrado: ";
    cin >> ladoCuadrado;
    
    establecerValidacion(ladoCuadrado);
    
    if (obtenerValidacion() == true) 
    {     
       cout << endl;

       while (contador <= ladoCuadrado)
        {
            if (contador == 1)
            {
                for (int i = 1; i <= ladoCuadrado; i++)
                {
                    if (i == ladoCuadrado)
                    {
                        cout << "*" << endl;
                    }

                    else 
                    {
                        cout << "*";
                    }
                }
            
                //el contador se incrementa
                contador++;
            }

            else if (contador == ladoCuadrado)
            {
                for (int k = 1; k <= ladoCuadrado; k++)
                {
                    if (k == ladoCuadrado)
                    {
                        cout << "*" << endl;
                    }

                    else 
                    {
                        cout << "*";
                    }
                }

                //el contador se incrementa
                contador++; 
            }

            else 
            {
                while (contador > 1 && contador < ladoCuadrado)
                {
                    for (int j = 1; j <= ladoCuadrado; j++)
                    {
                        if (j == 1) 
                        {
                            cout << "*";
                        }

                        else if (j == ladoCuadrado) 
                        {
                            cout << "*" << endl;
                        }

                        else 
                        {
                            cout << " ";
                        }
                    }

                    contador++;
                }      
            }
        }

        cout << endl;
    } 

    else 
    {
        cout << "Ingrese valores comprendidos entre el 1 y el 20.\n" << endl;
        goto Inicio;
    } 
}

void Cuadrado::establecerValidacion(int lado)
{
    if (lado >= 1 && lado <= 20)
    {
        validacion = true;
    }

    else 
    {
        validacion = false;
    }
}

bool Cuadrado::obtenerValidacion() 
{
    return validacion;
}

