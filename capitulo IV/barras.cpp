// Codigo Cliente

#include "./interfaz/barras.h"
#include "./clase/barras.cpp"

int main() {

	int contador = 1;

	int num1, num2, num3, num4, num5;

	Barra barra;  // clase barra

	cout << endl;

	cout << "\tDiseño de Graficos de Barra \n" << endl;

	while( contador <= 5 ) {
		
		Inicio:
			
		cout << "Ingrese los valores entre el 1 al 30: ";

		switch ( contador ) {
			case 1:
				
				cin >> num1;

				barra.validarNumero( num1 );

				if ( barra.obtenerValidacion() == true ) {
					barra.num1 = num1;
				}

				else {
					barra.mostrarMensaje();
					goto Inicio;
				} 

				break;				

			case 2:
				cin >> num2;

				barra.validarNumero( num2 );

				if ( barra.obtenerValidacion() == true ) {
					barra.num2 = num2;
				}

				else {
					barra.mostrarMensaje();
					goto Inicio;
				} 

				break;

			case 3:
				cin >> num3;

				barra.validarNumero( num3 );

				if ( barra.obtenerValidacion() == true ) {
					barra.num3 = num3;
				}

				else {
					barra.mostrarMensaje();
					goto Inicio;
				} 

				break;

			case 4:
				cin >> num4;

				barra.validarNumero( num4 );

				if ( barra.obtenerValidacion() == true ) {
					barra.num4 = num4;
				}

				else {
					barra.mostrarMensaje();
					goto Inicio;
				} 

				break;

			case 5:
				cin >> num5;

				barra.validarNumero( num5 );

				if ( barra.obtenerValidacion() == true ) {
					barra.num5 = num5;
				}

				else {
					barra.mostrarMensaje();
					goto Inicio;
				} 

				break;
		}

		contador++;
	}

	cout << endl;

	// imprime las barras
	barra.imprimirBarras( barra.num1 );
	barra.imprimirBarras( barra.num2 );
	barra.imprimirBarras( barra.num3 );
	barra.imprimirBarras( barra.num4 );
	barra.imprimirBarras( barra.num5 );

	cout << endl;

	return 0;
}

