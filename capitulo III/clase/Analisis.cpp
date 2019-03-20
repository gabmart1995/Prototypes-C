//Clase Analisis
#include "./../interfaz/Analisis.h"

void Analisis::procesarResultadosExamen()
{
    int aprobados = 0;
    int reprobados = 0;
    int contadorEstudiantes = 1;
    int resultado;

    cout << "\n\tBienvenido a la clase Analisis\n" << endl;

    //procesa los 10 estudiantes
    while (contadorEstudiantes <= 10)
    {
        Inicio:
        
        cout << "Escriba un resultado (1 = aprobado, 2 = reprobado): ";
        cin >> resultado;

        //funcion que valida las entradas
        validarEntrada(resultado);
        
        if (obtenerValidacion() == true) {
            
            if (resultado == 1) 
            {
                aprobados++;
            }

            else
            {
                reprobados++;  
            }
        }

        // obtenerValidacion es falso
        else
        {
            goto Inicio;
        }
        
        contadorEstudiantes++;
    }

    //muestra el numero de aprobados y reprobados
    cout << "\nAprobados: " << aprobados << "\nReprobados: " << reprobados << endl
    << endl;

    if (aprobados > 8) 
    {
        cout << "Aumentar colegiatura\n" << endl;
    }

}

void Analisis::validarEntrada(int resultado) 
{
    if (resultado != 1 && resultado != 2)
    {
        cout << "Ingrese los datos solicitados en pantalla.\n" << endl;
        validacion = false;
    }
    
    else 
    {
       validacion = true;
    }
}

bool Analisis::obtenerValidacion()
{
    return validacion;
}