// Programa que imprime graficos convencionales de barra.

#include <iostream>

using namespace std;

int main() {

	int contador = 1;

	int num1,
		num2,
		num3,
		num4,
		num5;

	void imprimirBarras( int, int, int, int, int );
	bool validarNumero( int );

	cout << endl;

	cout << "\tDiseño de Graficos de Barra \n" << endl;

	while( contador <= 5 ) {
		
		cout << "Ingrese los valores entre el 1 al 30: ";

		switch (contador) {
			case 1:
				
				cin >> num1;
				break;

			case 2:
				cin >> num2;
				break;

			case 3:
				cin >> num3;
				break;

			case 4:
				cin >> num4;
				break;

			case 5:

				cin >> num5;
				break;
		}

		contador++;
	}

	cout << endl;

	imprimirBarras( num1, num2, num3, num4, num5 );

	cout << endl;

}

void imprimirBarras( int num1, int num2, int num3, int num4, int num5 ) {

	cout << "Valor 1: " << num1 << " ";

	for ( int barra1 = 1; barra1 <= num1 ; barra1++ ) {
		cout << "*";
	}

	cout << endl << "Valor 2: " << num2 << " ";

	for ( int barra2 = 1; barra2 <= num2 ; barra2++ ) {
		cout << "*";
	}

	cout << endl << "Valor 3: " << num3 << " ";

	for ( int barra3 = 1; barra3 <= num3 ; barra3++ ) {
		cout << "*";
	}

	cout << endl << "Valor 4: " << num4 << " ";

	for ( int barra4 = 1; barra4 <= num4 ; barra4++ ) {
		cout << "*";
	}

	cout << endl << "Valor 5: " << num5 << " ";

	for ( int barra5 = 1; barra5 <= num5 ; barra5++ ) {
		cout << "*";
	}

	cout << endl;	
}

