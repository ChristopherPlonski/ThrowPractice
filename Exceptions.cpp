#include <iostream>
#include <exception>

#include "ArgumentOneIsNoGoodException.hpp"
#include "TheyCantBeTheSameException.hpp"
#include "TheyCantAddException.hpp"

void function(int a, int b, int c) {
	try {
		if (a > 0) {
			throw argOneIsNoGoodException;
		}

		if (a == b) {
			throw tcbts;
		}

		if (a + b == c) {
			throw theyCantAddException;
		}
	}
	catch(exception &e){
		cerr << e.what() << endl;
	}

}

int main() {
	function(5, 7, 9);
	function(-1, -1, -1);
	function(-1, -2, -3);


	return 0;
}