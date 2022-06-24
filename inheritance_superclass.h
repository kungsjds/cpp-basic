#include <iostream>

using namespace std;

// Defines a SuperClass Character
class Character {

// Private can only be accessed by itself.
private:
	string name;
	string origin;
	int power;
	
// Public can be accessed by itself, SubClass and others.
public:
	string getName() {

		return this->name;

	};

	void setName(string name) {

		this->name = name;

	};

	string getOrigin() {

		return this->origin;

	};

	void setOrigin(string origin) {

		this->origin = origin;

	};

	int getPower() {

		return this->power;

	};

	void setPower(int power) {

		this->power = power;

	};

// Protected can be accessed by itself and SubClass. Can't be accessed by others.
protected:
	string returnProtected() {

		return "Protected method";

	};

};
