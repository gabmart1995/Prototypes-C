#include <iostream>
#include <string>
#include <sstream>

// permite visualizar el tipo de variables
// #include <typeinfo>

using namespace std;

// estructuras de datos
struct movies {
	string title;
	int year;
};

void print_movie( movies movie ) {
	cout << movie.title;
	cout << " ( " << movie.year << " )\n\n"; 
}


int main() {
	
	struct movies mine = {"2001 A Space Odyseey", 1968}; 
	struct movies yours;
	string year;
	
	cout << "Enter title movie: ";
	getline( cin, yours.title );
	
	cout << "Enter year: ";
	getline( cin, year );
	stringstream( year ) >> yours.year;
	
	cout << "\nMy favorite movie is:" << endl;
	print_movie( mine );
	
	cout << "And Your is:" << endl;
	print_movie( yours );
	
	// cout << typeid( yours.year ).name() << endl;
	
	return 0;
}
