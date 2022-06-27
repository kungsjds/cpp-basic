#include "animal.h"

// Defines Subclass Mammal
class Mammal : public Animal {

private:
	int monthsGestation;

public:
	
	// Constructor
	Mammal() {

		setMonthsGestation(9);

	};

	// Getters / Setters
	int getMonthsGestation() {

		return this->monthsGestation;

	};

	void setMonthsGestation(int monthsGestation) {

		this->monthsGestation = monthsGestation;

	};

};