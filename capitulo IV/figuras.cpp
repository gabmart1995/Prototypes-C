// Programa que imprime las 4 figuras dentro del mismo archivo.
#include <iostream>

using namespace std;

int main() {

	int contador = 1;

	cout << endl;

	for( int i = 1; i <= 10; i++ ) {  // lineas verticales

		// lineas horinzontales		
		for( int j = 1; j <= contador; j++ ) { 
			cout << "*";
		}

		for ( int k = 10; k >= contador; k-- ) {
			cout << " ";
		}

		cout << "\t";

		for( int j = 10; j >= contador; j-- ) { 
			cout << "*";
		}

		for( int k = 1; k <= contador; k++ ) {  
			cout << " ";
		}

		cout << "\t";

		for( int j = 1; j <= contador; j++ ) {  
			cout << " ";
		}

		for( int k = 10; k >= contador; k-- ) {  
			cout << "*";
		}

		cout << "\t";

		for( int j = 10; j >= contador; j-- ) { 
			cout << " ";
		}

		for( int k = 1; k <= contador; k++ ) {  
			cout << "*";
		}

		cout << endl;
		contador++;
	}

	cout << endl;
	return 0;
}