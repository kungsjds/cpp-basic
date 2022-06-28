#include <iostream>
#include "language.h"

int main() {

	English english1;
	Portuguese portuguese1;
	French french1;

	// Polymorphism methods.
	english1.salute();
	portuguese1.salute();
	french1.salute();

	return 0;

};