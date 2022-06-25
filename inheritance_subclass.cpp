#include <iostream>
#include <string>
#include "inheritance_superclass.h"

using namespace std;

const int SIZE = 3;

// Defines a Player SubClass inherited by the Character SuperClass
class Player : public Character {

private:
	string vocation;
	int level;
	string* bag;
public:

	// Constructor
	Player() {

		this->setName("Empty");
		this->setOrigin("Empty");
		this->setPower(1);
		this->setVocation("Empty");
		this->setLevel(1);

		bag = new string[SIZE];
		for (int i = 0; i < SIZE; i++) {

			this->bag[i] = "Empty";

		};

	};

	string getVocation() {

		return this->vocation;

	};

	void setVocation(string vocation) {

		this->vocation = vocation;

	};

	int getLevel() {

		return this->level;

	};

	void setLevel(int level) {

		this->level = level;

	};

	string getBag(int i) {

		return this->bag[i];

	};

	void setBag(string* bag) {

		for (int i = 0; i < SIZE; i++) {

			this->bag[i] = bag[i];

		};

	};

	// Call the protected SuperClass Method. Can be accessed only by the SuperClass and SubClass.
	void superMethod() {

		cout << this->returnProtected();

	};

};

int main() {

	Player player1;

	string* bag = new string[SIZE];

	// SuperClass Methods.
	player1.setName("Kungs");
	player1.setOrigin("Demacia");
	player1.setPower(999);

	// SubClass Methods.
	player1.setVocation("Wizard");
	player1.setLevel(99);

	// SuperClass Methods
	cout << "Name: " << player1.getName() << "\n";
	cout << "Origin: " << player1.getOrigin() << "\n";
	cout << "Power: " << player1.getPower() << "\n";

	// SubClass Methods
	cout << "Vocation: " << player1.getVocation() << "\n";
	cout << "Level: " << player1.getLevel() << "\n";

	bag[0] = "Mana Potion";
	bag[1] = "Health Potion";
	bag[2] = "Magic Potion";

	player1.setBag(bag);

	cout << "Bag item: " << player1.getBag(2) << "\n";

	// Call the protected SuperClass Method. Can be accessed only by the SuperClass and SubClass.
	player1.superMethod();

	return 0;

};