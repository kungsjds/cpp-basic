#include <iostream>
#include "menu.h"

using namespace std;

int main() {

	CustomerMenu customerMenu1;
	AdminMenu adminMenu1;

	// Polymorphic methods
	customerMenu1.showOptions();
	adminMenu1.showOptions();

	return 0;

};