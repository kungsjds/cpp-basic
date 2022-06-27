#include <iostream>

using namespace std;

// Defines superclass Animal.
class Animal {

private:
	string ground;

public:

	// Constructor
	Animal() {

		setGround("Empty");

	};

	// Getters / Setters
	string getGround() {

		return this->ground;

	};

	void setGround(string ground) {

		this->ground = ground;

	};

};