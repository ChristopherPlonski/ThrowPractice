#include <exception>

using namespace std;

class ArgumentOneIsNoGoodException : public exception {

public:
	virtual const char* what() const throw() {
		return "Argument one is no good.";
	}

} argOneIsNoGoodException;