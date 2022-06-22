#include <iostream>

using namespace std; // To use cout/cin

class Enemy {

	// Private attributes. Access only by the class
private:
	string name;
	int power;

	// Public methods (or attributes too). Global access.
public:

	// Define contructor
	Enemy() {

		this->setName("Warlock");
		this->setPower(100);

	};

	// Define getter
	string getName() {

		return this->name;

	};

	// Define setter
	void setName(string name) {

		this->name = name;

	};

	// Define getter
	int getPower() {

		return this->power;

	};

	// Define setter
	void setPower(int power) {

		this->power = power;

	};

};

int main() {

	Enemy enemy1;
	
	cout << "Name: " << enemy1.getName() << "\n";
	cout << "Power: " << enemy1.getPower() << "\n";

	enemy1.setName("Orc");
	enemy1.setPower(50);

	cout << "Name: " << enemy1.getName() << "\n";
	cout << "Power: " << enemy1.getPower() << "\n";

};