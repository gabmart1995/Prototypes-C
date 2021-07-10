#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Coversor {
	
	private:
		struct ascii_caracter {
			int code;
			string character;
		};
		
		vector<ascii_caracter>;
		
	public:
		void set_data();
		void push_data( ascii_caracter );
		vector<ascii_caracter> get_data();
};
