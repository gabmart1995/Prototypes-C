#include "./ascii.cpp"

int main() {
		
	int option;
	
	string word;
	string response;
	
	bool app = true;
	
	set_vector();
	
	cout << "Bienvenido a la calculadora binaria" << endl << endl;
	
	do {
		cout << "¿Que desea convertir?" << endl;
		cout << "1.- Convertir a binario" << endl;
		cout << "2.- Convertir de binario a caracter" << endl;
		cout << "3.- Salir" << endl << endl;
		
		cout << "Ingrese una opcion: ";
		cin >> option;
		
		switch ( option ) {
			
			case 1: {
				
				cout << "Ingresa una palabra: ";
				cin >> word;
				
				response = character_to_binary( word );
				
				cout << "\nEl resultado es: " << response << endl << endl;
				
				break;
			}
			
			case 2: {
				cout << "Convertir a caracter" << endl;
				break;
			}
			
			case 3: {
				
				// cambia el estado de la app y cierra la sesion
				app = false;
				
				break;
			}
			
			default: {
				cout << "La opcion seleccionada no es valida" << endl;
				break;	
			}
		}
	
	} while ( app );
}
