#include <iostream>

using namespace std;

class TheyCantBeTheSame : public exception {

public:
	virtual const char* what() const throw() {
		return "theycantbethesame.";
	}
} tcbts;