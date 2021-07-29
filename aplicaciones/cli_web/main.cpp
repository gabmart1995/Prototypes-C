#include <iostream>
#include <string>

using namespace std;

struct app {
	string option;
	string name_app;  
	bool basic_web;
	bool basic_console;
} user;


void print_help_message() {
	cout << "Bit CLI" << endl << endl;
	cout << "Es una aplicacion de linea de comandos que permite crear estructuras de proyectos de consola y web\n" << endl;
	cout << "Opciones a realizar:" << endl << endl;

	cout << "new name\t\tcrea un nueva estructura de proyecto" << endl << endl;
	cout << " basic flags:" << endl;
	cout << " --basic-web\t\tcrea la estructura web con html, css, js" << endl;
	cout << " --basic-console\tcrea la estructura basica de consola" << endl << endl;

	cout << "help\t\tmuestra la ayuda al usuario" << endl;
}

void print_message( string message ) {
	cout << message << endl << endl;
}

void get_flags( char** argv ) {
	
	user.option = string( argv[1] );
	user.name_app = string( argv[2] );

	// flags
	if ( argv[3] ) {
		user.basic_web = string( argv[3] ) == "--basic-web" ? true : false;
		user.basic_console = string( argv[3] ) == "--basic-console" ? true : false;
	}
}


int main( int argc, char** argv ) {
 
	if ( argc == 1 || string( argv[1] ) == "help" ) {

		print_help_message();

		return 0;
	}

	// rangos
	if ( argc < 4 ) {
		print_message("\nDebe ingresar la opcion --basic-web' o --basic-console");
		
		return 0;
	}

	if ( argc > 4 ) {
		print_message("\nDemasiados argumentos para procesar");

		return 0;
	}

	get_flags( argv );

	if ( user.basic_web && !user.basic_console ) {
		cout << "generando plantilla web espere ..." << endl;

	} else if ( !user.basic_web && user.basic_console ) {
		cout << "generando plantilla de consola espere ..." << endl;

	} 
 
	return 0;
}