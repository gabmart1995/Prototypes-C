#include <iostream>
#include <limits>

using namespace std;

struct info_direccion {
	char direction[30];
	char city[30];
	char province[20];
};

struct employee {
	char name[20];
	struct info_direccion dir_employee;
	double salary;
} employees[2];

int get_length_employees() {
	return sizeof( employees ) / sizeof( *employees ); 
}

void print_employee( employee worker ) {
	cout << "Nombre: " << worker.name << endl;
	cout << "Direccion: " << worker.dir_employee.direction << endl;
	cout << "Ciudad: " << worker.dir_employee.city << endl;
	cout << "Provincia: " << worker.dir_employee.province << endl;
	cout << "Salario: " << worker.salary << endl << endl; 
}

void cleanBuffer() {
	cin.ignore( numeric_limits<int>::max(), '\n' );
}

int main( int argc, char *argv[] ) {
	
	for ( int i = 0; i < get_length_employees(); i++ ) {
		
		cout << "Ingrese su nombre: ";
		cin.getline( employees[i].name, 20 );
		
		cout << "Ingrese su dirección: ";
		cin.getline( employees[i].dir_employee.direction, 30 );
		
		cout << "Ciudad: ";
		cin.getline( employees[i].dir_employee.city, 30 );
		
		cout << "Provincia: ";
		cin.getline( employees[i].dir_employee.province, 20 );
		
		cout << "Salario: ";
		cin >> employees[i].salary;
		cout << endl;
		
		// se debe limpiar el buffer al finalizar cada iteracion del bucle
		//cleanBuffer();
	}
	
	for ( int i = 0; i < get_length_employees(); i++ ) {
		print_employee( employees[i] );
	}
	
	return 0;
}

/*
  Documentacion
  
  void cleanBuffer() {

		este codigo permite vaciar el buffer de forma manual
	
		int character;
		
		while ( ( character = fgetc( stdin )) != EOF ) {
		
			if ( character == '\n' ) {
				break;
			}
		
		}
	}
*/
