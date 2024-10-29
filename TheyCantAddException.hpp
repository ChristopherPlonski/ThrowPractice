#include <exception>

using namespace std;

class TheyCantAddException : public exception {

public:
	virtual const char* what() const throw() {
		return "They can't add.";
	}

} theyCantAddException;