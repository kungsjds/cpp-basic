#include <iostream>
#include "inheritance_superclass.h"

using namespace std;

// Defines a Player SubClass inherited by the Character SuperClass
class Player : public Character {

private:
	string vocation;
	int level;

public:
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

};

int main() {

	Player player1;

	return 0;

};