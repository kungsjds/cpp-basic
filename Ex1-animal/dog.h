#include "mammal.h"

// Defines Subclass Dog
class Dog : public Mammal {

private:
	string breed;

public:

	// Contructor
	Dog() {

		setBreed("Empty");

	};

	Dog(string ground, int monthsGestation, string breed) {

		setGround(ground);
		setMonthsGestation(monthsGestation);
		setBreed(breed);

	};

	// Getters/Setters
	string getBreed() {

		return this->breed;

	};

	void setBreed(string breed) {

		this->breed = breed;
		
	};

	// Bark method
	void bark() {

		cout << "Au au au!";

	};

};