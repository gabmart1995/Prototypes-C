// Programa que imprime graficos convencionales de barra (Interfaz).

#include <iostream>

using namespace std;

class Barra {

	public: 
		int num1, num2, num3, num4, num5;

		void validarNumero( int );
		void imprimirBarras( int );
		void mostrarMensaje();

		bool obtenerValidacion();

	private:
		bool validacion;
};