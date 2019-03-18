//Clase Analisis
#include "./../interfaz/Analisis.h"

void Analisis::procesarResultadosExamen()
{
    int aprobados = 0;
    int reprobados = 0;
    int contadorEstudiantes = 1;
    int resultado;

    //procesa los 10 estudiantes
    while (contadorEstudiantes <= 10)
    {
        cout << "Escriba un resultado (1 = aprobado, 2 = reprobado): ";
        cin >> resultado;

        if (resultado == 1) 
        {
            //se incrementa el valor
            aprobados++;
        }

        else
        {
            //postincremento
            reprobados++;  
        }
        
        contadorEstudiantes++;
    }

    //muestra el numero de aprobados y reprobados
    cout << "Aprobados: " << aprobados << "\nReprobados: " << reprobados << endl;

    if (aprobados > 8) 
    {
        cout << "Aumentar colegiatura" << endl;
    }
}