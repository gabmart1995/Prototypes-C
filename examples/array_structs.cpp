#include <iostream>
#include <string>
#include <sstream>

// se crea un array en C de estructuras que permita obtener datos
using namespace std;

struct movies {
	string title;
	int year;
} films[3];

void print_movie( movies movie ) {
	cout << movie.title;
	cout << " ( " << movie.year << " )\n"; 
}

int get_length_films() {
	
	// obtiene la longitud de los filmes
	// cout << sizeof( films ) << endl; 120 bytes 
	// cout << sizeof( *films ) << endl;  40 bytes 
	
	return sizeof( films ) / sizeof( *films );	
}

int main( int argc, char *argv[] ) {
	
	string year;
	
	// solicitamos la informacion al usuario segun la logitud del array de films
	for ( int i = 0; i < get_length_films(); i++ ) {
		cout << "Enter title: ";
		getline( cin, films[i].title );
		
		cout << "Enter year: ";
		getline( cin, year );
		stringstream( year ) >> films[i].year;
	}
	
	// mostramos la informacion al usuario
	for ( int i = 0; i < get_length_films(); i++ ) {
		print_movie( films[i] );
	}
	
	return 0;
}
