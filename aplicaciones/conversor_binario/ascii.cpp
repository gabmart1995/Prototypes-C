#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // biblioteca de manipulacion de listas
#include <cmath>
#include <regex> // biblioteca de expresiones regulares

using namespace std;

struct ascii_caracter {
	int code;
	string character;
};

vector<ascii_caracter> table_ascii;

// regular exoresions
regex str_expr("^[a-zA-Z]+$");
regex bin_expr("^[0-1]+$");

void set_vector() {
	
	struct ascii_caracter A = {65, "A"}; 
	struct ascii_caracter B = {66, "B"};
	struct ascii_caracter C = {67, "C"};
	struct ascii_caracter D = {68, "D"};
	struct ascii_caracter E = {69, "E"};
	struct ascii_caracter F = {70, "F"};
	struct ascii_caracter G = {71, "G"};
	struct ascii_caracter H = {72, "H"};
	struct ascii_caracter I = {73, "I"};
	struct ascii_caracter J = {74, "J"};
	struct ascii_caracter K = {75, "K"};
	struct ascii_caracter L = {76, "L"};
	struct ascii_caracter M = {77, "M"};
	struct ascii_caracter N = {78, "N"};
	struct ascii_caracter O = {79, "O"};
	struct ascii_caracter P = {80, "P"};
	struct ascii_caracter Q = {81, "Q"};
	struct ascii_caracter R = {82, "R"};
	struct ascii_caracter S = {83, "S"};
	struct ascii_caracter T = {84, "T"};
	struct ascii_caracter U = {85, "U"};
	struct ascii_caracter V = {86, "V"};
	struct ascii_caracter W = {87, "W"};
	struct ascii_caracter X = {88, "X"};
	struct ascii_caracter Y = {89, "Y"};
	struct ascii_caracter Z = {90, "Z"}; 
	
	struct ascii_caracter a = {97, "a"};
	struct ascii_caracter b = {98, "b"};
	struct ascii_caracter c = {99, "c"};
	struct ascii_caracter d = {100, "d"};
	struct ascii_caracter e = {101, "e"};
	struct ascii_caracter f = {102, "f"};
	struct ascii_caracter g = {103, "g"};
	struct ascii_caracter h = {104, "h"};
	struct ascii_caracter i = {105, "i"};
	struct ascii_caracter j = {106, "j"};
	struct ascii_caracter k = {107, "k"};
	struct ascii_caracter l = {108, "l"};
	struct ascii_caracter m = {109, "m"};
	struct ascii_caracter n = {110, "n"};
	struct ascii_caracter o = {111, "o"};
	struct ascii_caracter p = {112, "p"};
	struct ascii_caracter q = {113, "q"};
	struct ascii_caracter r = {114, "r"};
	struct ascii_caracter s = {115, "s"};
	struct ascii_caracter t = {116, "t"};
	struct ascii_caracter u = {117, "u"};
	struct ascii_caracter v = {118, "v"};
	struct ascii_caracter w = {119, "w"};
	struct ascii_caracter x = {120, "x"};
	struct ascii_caracter y = {121, "y"};
	struct ascii_caracter z = {122, "z"};
	
	table_ascii.push_back( A );
	table_ascii.push_back( B );
	table_ascii.push_back( C );
	table_ascii.push_back( D );
	table_ascii.push_back( E );
	table_ascii.push_back( F );
	table_ascii.push_back( G );
	table_ascii.push_back( H );
	table_ascii.push_back( I );
	table_ascii.push_back( J );
	table_ascii.push_back( K );
	table_ascii.push_back( L );
	table_ascii.push_back( M );
	table_ascii.push_back( N );
	table_ascii.push_back( O );
	table_ascii.push_back( P );
	table_ascii.push_back( Q );
	table_ascii.push_back( R );
	table_ascii.push_back( S );
	table_ascii.push_back( T );
	table_ascii.push_back( U );
	table_ascii.push_back( V );
	table_ascii.push_back( W );
	table_ascii.push_back( X );
	table_ascii.push_back( Y );
	table_ascii.push_back( Z );
	
	table_ascii.push_back( a );
	table_ascii.push_back( b );
	table_ascii.push_back( c );
	table_ascii.push_back( d );
	table_ascii.push_back( e );
	table_ascii.push_back( f );
	table_ascii.push_back( g );
	table_ascii.push_back( h );
	table_ascii.push_back( i );
	table_ascii.push_back( j );
	table_ascii.push_back( k );
	table_ascii.push_back( l );
	table_ascii.push_back( m );
	table_ascii.push_back( n );
	table_ascii.push_back( o );
	table_ascii.push_back( p );
	table_ascii.push_back( q );
	table_ascii.push_back( r );
	table_ascii.push_back( s );
	table_ascii.push_back( t );
	table_ascii.push_back( u );
	table_ascii.push_back( v );
	table_ascii.push_back( w );
	table_ascii.push_back( x );
	table_ascii.push_back( y );
	table_ascii.push_back( z );
}

vector<ascii_caracter> get_vector() {
	return table_ascii;
}

string inverse_string( string result ) {
	
	reverse( result.begin(), result.end() );
	
	return result;
}

string get_binary( string letter ) {
	
	vector<ascii_caracter> table_ascii = get_vector();
	
	int code, result;
	
	string binary;
	
	for ( int i = 0; i < table_ascii.size(); i++ ) {
		
		if ( table_ascii[i].character == letter ) {
			
			code = table_ascii[i].code;
			
			while ( code > 1 ) {
				
				result = code % 2;
				
				binary += to_string( result );
				
				code /= 2;
			}
			
			// parsea el resultado a string, que corresponde al ultimo digito
			binary += to_string( code );
		}
	}
	
	// invierte la cadena binaria para obtener el resultado real
	binary = inverse_string( binary );
	
	return binary;
}

string character_to_binary( string word ) {
	
	string binary_chain;
	string letter;
	
	if ( !regex_match( word, str_expr ) ) {	
		
		binary_chain = "Expresión no valida";
		
		return binary_chain;
	}
	
	// separa las letras y las transforma 
	for ( int i = 0; i < word.size(); i++ ) {
		
		letter = string( 1, word[i] );
		
		binary_chain += get_binary( letter );
	}
	
	return binary_chain;
}

string get_caracter( string binary_caracter ) {
		
	int exponent = 0;
	int value = 0;
	
	vector<ascii_caracter> table_ascii = get_vector();
	
	// binario a decimal
	for ( int i = ( binary_caracter.size() - 1 ); i >= 0; i-- ) {
		
		// se parsea de un puntero char* a string
		if ( string( 1, binary_caracter[i] ) == "1" ) {
			value = value + pow( 2, exponent ); 
		}
			
		exponent++;
	}
	
	// una vez obtenido el valor se busca en la tabla
	for ( int i = 0; i < table_ascii.size(); i++ ) {
		
		if ( table_ascii[i].code == value ) {
			return table_ascii[i].character;
		}
 	}
}

string binary_to_caracter( string binary ) {
	
	string word;
	
	if ( !regex_match( binary, bin_expr ) ) {

		word = "Expresión no válida";
		
		return word;
	}
	
	// separa 7 digitos binarios y busca el caracter
	for ( int i = 0; i < binary.size();  i += 7 ) {
		word += get_caracter( binary.substr( i, 7 ));
	}
	
	return word;
}
