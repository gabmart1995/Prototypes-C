// Codigo fuente
void Barra::validarNumero( int numero ) {

	if ( ( numero < 1 ) || ( numero > 30 ) ) {
		validacion = false;
	} 

	else {
		validacion = true;
	}
}

void Barra::imprimirBarras( int numero ) {

	cout << "Valor: " << numero << " ";

	for( int i = 1; i <= numero; i++) {
		cout << "*";
	}

	cout << endl;	
}

void Barra::mostrarMensaje() {
	
	cout << "\nIngresa un número entre el rango del 1 al 30.\n" << endl;
}

bool Barra::obtenerValidacion() {
	
	return validacion;
}