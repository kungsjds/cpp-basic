#include <iostream>

using namespace std;

// Superclass
class Menu {

public:
	// Virtual method (empty)
	void showOptions() {};

};

// Subclass
class CustomerMenu : public Menu {

public:
	// Polymorphic method
	void showOptions() {

		string options;

		options = "-----Options Customer: \n";
		options += " 1 - Home\n";
		options += " 2 - Devolution\n";
		options += " 3 - Order\n";
		options += " 4 - Settings\n";
		options += " 5 - Exit\n";
		
		cout << options << endl;

	};

};

// Subclass
class AdminMenu : public Menu {

public:
	// Polymorphic method
	void showOptions() {

		string options;

		options = "-----Options Admin: \n";
		options += " 1 - Home\n";
		options += " 2 - Devolution\n";
		options += " 3 - Order\n";		
		options += " 4 - Product Management\n";
		options += " 5 - Inventory\n";
		options += " 6 - Settings\n";
		options += " 7 - Exit\n";

		cout << options << endl;

	};

};